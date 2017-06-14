#!/bin/bash

FILE_CHECKER_DIR="../42FileChecker/42FileChecker.sh"
PROJECT_ROOT=`pwd`
echo $FILE_CHECKER_DIR
echo $PROJECT_ROOT

bash $FILE_CHECKER_DIR --project "libft" --path $PROJECT_ROOT
