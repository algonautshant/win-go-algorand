#!/usr/bin/env bash

ARCH=$(uname -m)

if [[ "${ARCH}" = "x86_64" ]]; then
    echo "amd64"
elif [[ "${ARCH}" = "armv6l" ]]; then
    echo "arm"
elif [[ "${ARCH}" = "armv7l" ]]; then
    echo "arm"
elif [[ "${ARCH}" = "aarch64" ]]; then
    echo "arm64"
elif [[ "${ARCH}" = "CYGWIN_NT-10.0" ]]; then
    echo "cygwin"
else
    # Anything else needs to be specifically added...
    echo "unsupported"
    exit 1
fi
