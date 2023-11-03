#!/usr/bin/bash

# 临时使用脚本编译

if [ "$1" = "slist" ];then
    gcc -DSLIST_UP src/main.c src/slist.c -o slist
    exit $?
fi

if [ "$1" = "dlist" ];then
    gcc -DDLIST_UP src/main.c src/dlist.c -o dlist
    exit $?
fi

if [ "$1" = "clist" ];then
    gcc -DCLIST_UP src/main.c src/clist.c -o clist
    exit $?
fi

echo "$0 [slist|dlist|clist]"
