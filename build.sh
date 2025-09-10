#!/bin/bash

if [ "$DEBUGx" != "x" ]; then
  set -x
fi

CURRENT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd -P)"
SETUP=false
if [ "$1" = "--setup" ]; then
  SETUP=true
  shift
fi

GIT_REVISION=$(git rev-parse --short HEAD)
GIT_BRANCH=$(git rev-parse --abbrev-ref HEAD)

if [ $( uname -m ) = "arm64" ]; then
  export CROSS_COMPILE=arm-none-linux-gnueabihf-
else
  export CROSS_COMPILE=aarch64_be-none-linux-gnu-
fi

function docker_make() {
    if [ -z "$(docker images -q localbuild/guppydev 2> /dev/null)" ]; then
      echo "Building local docker image"
      docker build -t localbuild/guppydev .
    fi

    target_arg="GUPPY_CALIBRATE=true"
  
    docker run -ti -v $PWD:$PWD localbuild/guppydev /bin/bash -c "cd $PWD && GUPPYSCREEN_VERSION=$GIT_REVISION GUPPYSCREEN_BRANCH=$GIT_BRANCH $target_arg CROSS_COMPILE=$CROSS_COMPILE make $@"
}

if [ "$SETUP" = "true" ]; then
    if [ ! -f .guppydev-prepare-sub ]; then
      git submodule init && git submodule update
      (cd lv_drivers/ && git apply ../patches/0001-lv_driver_fb_ioctls.patch)
      (cd spdlog/ && git apply ../patches/0002-spdlog_fmt_initializer_list.patch)
      touch .guppydev-prepare-sub
    fi

    docker_make spdlogclean || exit $?
    docker_make libhvclean || exit $?
    docker_make wpaclean || exit $?
    docker_make clean || exit $?

    docker_make libhv.a || exit $?
    docker_make wpaclient || exit $?
    docker_make libspdlog.a || exit $?
else
    docker_make $1 || exit $?
fi
