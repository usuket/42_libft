# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/05 18:18:09 by ysakakib          #+#    #+#              #
#    Updated: 2017/06/05 18:18:15 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=srcs/*.c
HEADERS=headers/
TESTS=tests/*.c

DEL = rm -f
FLAGS=-Wall -Wextra -std=c99

$(NAME):
	echo $(NAME)
	gcc -c $(FLAGS) $(SRCS) -I $(HEADERS)
	ar rc $(NAME) *.o
	ranlib libft.a
all:
	ls -la $(SRCS)
clean:
	$(DEL) *.o
	$(DEL) a.out
fclean:
	$(DEL) *.o
	$(DEL) a.out
	$(DEL) libft.a
re: fclean all
test: $(NAME)
	gcc libft.a -I headers srcs/ft_memset.c tests/test_ft_memset.c -o output/test_ft_memset.out
	gcc libft.a -I headers srcs/ft_bzero.c tests/test_ft_bzero.c -o output/test_ft_bzero.out
	gcc libft.a -I headers srcs/ft_strdup.c tests/test_ft_strdup.c -o output/test_ft_strdup.out
	gcc libft.a -I headers srcs/ft_atoi.c tests/test_ft_atoi.c -o output/test_ft_atoi.out
	gcc libft.a -I headers srcs/ft_isalnum.c tests/test_ft_isalnum.c -o output/test_ft_isalnum.out
	gcc libft.a -I headers srcs/ft_isprint.c tests/test_ft_isprint.c -o output/test_ft_isprint.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_isdigit.c tests/test_ft_isdigit.c -o output/test_ft_isdigit.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_isascii.c tests/test_ft_isascii.c -o output/test_ft_isascii.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_isalpha.c tests/test_ft_isalpha.c -o output/test_ft_isalpha.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_strlen.c tests/test_ft_strlen.c -o output/test_ft_strlen.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_toupper.c tests/test_ft_toupper.c -o output/test_ft_toupper.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_tolower.c tests/test_ft_tolower.c -o output/test_ft_tolower.out
clean_test:
	rm -f output/*.out
