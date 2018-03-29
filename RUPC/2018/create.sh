#!/bin/bash

declare -a array=("A" "B" "C" "D" "E" "F" "G" "H" "I" "J" "K" "L" "M" "N" "O" "P" "Q" "R" "S" "T" "U" "V" "W" "X" "Y" "Z")

if [ $# -eq 1 ]; then
    NAME="${1}"
else
    echo "Contest name = "
    read NAME
fi

mkdir -p ./${NAME}

if [ ${NAME:0:3} = "ABC" ]; then
    for ((i = 0;i < 4;i++)) {
        cp ./template/template.cpp ./${NAME}/prob${array[i]}.cpp
    }
elif [ ${NAME:0:3} = "ARC" ]; then
    for ((i = 2;i < 6;i++)) {
        cp ./template/template.cpp ./${NAME}/prob${array[i]}.cpp
    }
else
    echo "Number of Question = "
    read QUESTIONS
    for ((i = 0;i < ${QUESTIONS};i++)) {
        cp ./template/template.cpp ./${NAME}/prob${array[i]}.cpp
    }
fi
cp ./template/Makefile ./${NAME}
touch ./${NAME}/input.txt