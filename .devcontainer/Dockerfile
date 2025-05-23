
ARG VARIANT=ubuntu-24.04
FROM mcr.microsoft.com/devcontainers/base:${VARIANT}
USER root

RUN apt-get update \
    && \
    export DEBIAN_FRONTEND=noninteractive \
    && \
    apt-get -y install \
    build-essential \
    llvm \
    clang \
    cmake \
    ninja-build \
    clangd \
    libboost-all-dev \
    libtorrent-rasterbar-dev \
    qt6-base-dev \
    && \
    apt-get autoremove -y \
    && \
    apt-get clean -y \
    && \
    rm -rf /var/lib/apt/lists/*
