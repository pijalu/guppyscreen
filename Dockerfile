FROM debian:bullseye

ARG TARGETPLATFORM
ARG BUILDPLATFORM

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -y wget build-essential cmake libsdl2-dev git zip ca-certificates && update-ca-certificates && \
    apt-get clean all && \
    apt-get -y autoremove

WORKDIR /toolchains
COPY docker-setup.sh /toolchains

RUN sh /toolchains/docker-setup.sh

ENV PATH=/toolchains/gcc-arm-10.2-2020.11-aarch64-arm-none-linux-gnueabihf/bin:/toolchains/gcc-arm-10.2-2020.11-x86_64-aarch64_be-none-linux-gnu/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
CMD ["/bin/bash"]
