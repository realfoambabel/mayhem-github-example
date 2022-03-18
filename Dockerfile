# Always points to the latest as defined by developer.
FROM debian:stable-slim

RUN apt-get update && apt-get install -y build-essential libc6-dbg
WORKDIR /build
COPY . .
RUN gcc -o myapp -g -O2 myapp.c
CMD "./myapp"
