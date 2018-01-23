#!/bin/sh

read NAME

mkdir -p ./${NAME}

if [ ${NAME:0:3} = "ABC" ]; then
    cp ./template/template.cpp ./${NAME}/probA.cpp
    cp ./template/template.cpp ./${NAME}/probB.cpp
    cp ./template/template.cpp ./${NAME}/probC.cpp
    cp ./template/template.cpp ./${NAME}/probD.cpp
elif [ ${NAME:0:3} = "ARC" ]; then
    cp ./template/template.cpp ./${NAME}/probC.cpp
    cp ./template/template.cpp ./${NAME}/probD.cpp
    cp ./template/template.cpp ./${NAME}/probE.cpp
    cp ./template/template.cpp ./${NAME}/probF.cpp
fi
cp ./template/Makefile ./${NAME}
touch ./${NAME}/input.txt