#!/bin/zsh

if [ $1 = "" ];then
    echo 'need 1 argv'
    exit 1;
fi

ADD_FILE=$1
TARGET_FILE=Makefile
TESTLINE=`grep -e 'test: $(NAME)' -n Makefile | cut -d: -f1`
# TODO
# Add below line at specific line.

touch srcs/$ADD_FILE.c
touch tests/test_$ADD_FILE.c
echo "	gcc libft.a -I headers srcs/${ADD_FILE}.c tests/test_${ADD_FILE}.c -o output/test_${ADD_FILE}.out" >> Makefile

