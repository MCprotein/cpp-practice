#!/bin/bash

CHAPTER=""
FILENAME=""

while getopts "c:f:" opt; do
    case $opt in
        c) CHAPTER="$OPTARG" ;;
        f) FILENAME="$OPTARG" ;;
    esac
done

if [ -z "$CHAPTER" ] || [ -z "$FILENAME" ]; then
    echo "사용법: ./run.sh -c <챕터번호> -f <파일명>"
    echo "예시: ./run.sh -c 1 -f switchcase"
    exit 1
fi

SRC="src/$CHAPTER/$FILENAME.cpp"

mkdir -p dist

echo "컴파일: g++ $SRC -o dist/$FILENAME"
g++ "$SRC" -o "dist/$FILENAME"

if [ $? -eq 0 ]; then
    echo "실행: dist/$FILENAME"
    echo "---"
    ./dist/$FILENAME
fi
