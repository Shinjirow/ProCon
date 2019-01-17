#!/bin/bash
TARGET="${HOME}/Downloads"
CXX="clang++"
CXXFLAGS="-std=c++14 -o"

cd `dirname $0`

for i in {A..K}
do
    mv ${TARGET}/$i.txt $(pwd) > /dev/null 2>&1
done

q=$(echo ${1} | tr a-z A-Z)
$CXX $CXXFLAGS ${q}exe prob${q}.cpp
./${q}exe < $q.txt > $q.res.txt
rm ${q}exe