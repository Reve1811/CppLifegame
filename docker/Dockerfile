FROM ubuntu:20.04

RUN ln -sf /usr/share/zoneinfo/Asia/Tokyo /etc/localtime
RUN apt-get update 
RUN apt-get install -y git tzdata

RUN apt-get install -y build-essential
RUN apt-get install -y cmake
RUN apt-get install -y clang
RUN apt-get install -y vim
RUN apt-get install -y gdb
RUN apt-get install -y python3-pip
RUN apt-get install -y git
    
RUN git clone https://github.com/google/googletest.git -b release-1.11.0 && \
    cd googletest && \
    mkdir build && \
    cd build && \
    cmake ..  && \
    make -j 4 && \
    make install

RUN pip install cpplint