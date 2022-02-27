FROM ubuntu:20.04

RUN ln -sf /usr/share/zoneinfo/Asia/Tokyo /etc/localtime
RUN apt-get update && apt-get install -y git tzdata


RUN apt-get install -y \
    build-essential \
    cmake \
    clang \
    vim \
    gdb \
    python3-pip
    
