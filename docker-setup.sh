#!/bin/bash

set -x
echo "Running on ($BUILDPLATFORM) / building for ($TARGETPLATFORM)"

if [ "$BUILDPLATFORM" = "linux/arm64" ]; then
    # arm-none-linux-gnueabihf-
    wget 'https://developer.arm.com/-/media/Files/downloads/gnu-a/10.2-2020.11/binrel/gcc-arm-10.2-2020.11-aarch64-arm-none-linux-gnueabihf.tar.xz?revision=26cbedef-a2fa-4687-b6bb-2fefc0d3c5d6&rev=26cbedefa2fa4687b6bb2fefc0d3c5d6&hash=4093BE041D60B2AC0C32FCDCC9A1DB4580DCA64C' -O /tmp/gcc-arm-10.2-2020.11-aarch64-arm-none-linux-gnueabihf.tar.xz
    tar -xf /tmp/gcc-arm-10.2-2020.11-aarch64-arm-none-linux-gnueabihf.tar.xz -C /toolchains/
 else
    # aarch64_be-none-linux-gnu-
    wget 'https://developer.arm.com/-/media/Files/downloads/gnu-a/10.2-2020.11/binrel/gcc-arm-10.2-2020.11-x86_64-aarch64_be-none-linux-gnu.tar.xz?revision=46dccf35-6c87-4622-86cb-85253220a15d&rev=46dccf356c87462286cb85253220a15d&hash=926D1D7038639C4D73E6642E16E22FC6D5515AF9' -O /tmp/gcc-arm-10.2-2020.11-x86_64-aarch64_be-none-linux-gnu.tar.xz 
    tar -xf /tmp/gcc-arm-10.2-2020.11-x86_64-aarch64_be-none-linux-gnu.tar.xz -C /toolchains/
fi

rm /tmp/gcc-arm-10.2-2020.11-*