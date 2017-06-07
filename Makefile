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
test:
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_isdigit.c tests/test_ft_isdigit.c -o output/test_ft_isdigit.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_isascii.c tests/test_ft_isascii.c -o output/test_ft_isascii.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_isalpha.c tests/test_ft_isalpha.c -o output/test_ft_isalpha.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_strlen.c tests/test_ft_strlen.c -o output/test_ft_strlen.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_toupper.c tests/test_ft_toupper.c -o output/test_ft_toupper.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_tolower.c tests/test_ft_tolower.c -o output/test_ft_tolower.out
clean_test:
	rm -f output/*.out
