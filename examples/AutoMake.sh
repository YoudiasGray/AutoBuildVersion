#! /bin/bash
./AutoGenerateBuildVersion
if [ ! -n "$1" ];then
    make
else
    make $1
fi
