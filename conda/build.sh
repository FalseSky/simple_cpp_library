#!/bin/bash

set -e

mkdir -p $SRC_DIR/build
cd $SRC_DIR/build

cmake $SRC_DIR -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build .
cmake --install .
