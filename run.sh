#!/bin/bash
set -e

PARTIAL=$1
mkdir -p build

find src -type d -name "*$PARTIAL*" | while read -r dir; do
    base=$(basename "$dir")
    [ -d "build/$base" ] && rm -rf "build/$base"
    clang++ "$dir"/*.cpp -o "build/$base"
    ./build/"$base"
done

