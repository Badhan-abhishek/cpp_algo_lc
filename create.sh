#!/bin/bash
set -e

NAME=$1

mkdir src/$NAME

FILENAME="$NAME.cpp"
MAINPATH=src/$NAME/main.cpp
FILEPATH=src/$NAME/$FILENAME

touch $FILEPATH
touch $MAINPATH 

cat << INPUT  >> $MAINPATH
#include "$FILENAME"

int main() {
    Solution s;
    // Write your test cases here

    return 0;
}
INPUT

cat << INPUT >> $FILEPATH

class Solution {
public:
    // Add your methods here
}

INPUT
