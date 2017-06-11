#!/bin/zsh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    add.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/11 10:08:43 by ysakakib          #+#    #+#              #
#    Updated: 2017/06/11 10:08:51 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if [ $1 = "" ];then
    echo 'need 1 argv'
    exit 1;
fi

# TODO add 42 header automatically
NAME=`cat author`
DATE=`date "+%Y/%m/%d %H:%M:%S"`

ADD_FILE=$1
TARGET_FILE=Makefile
TESTLINE=`grep -e 'test: $(NAME)' -n Makefile | cut -d: -f1`
# TODO
# Add below line at specific line.

touch srcs/$ADD_FILE.c
touch tests/test_$ADD_FILE.c
echo "	gcc libft.a -I headers srcs/${ADD_FILE}.c tests/test_${ADD_FILE}.c -o output/test_${ADD_FILE}.out" >> Makefile

