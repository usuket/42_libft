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
	gcc $(FLAGS) $(SRCS) -I $(HEADERS)
all:
	ls -la $(SRCS)
clean:
	$(DEL) *.o
	$(DEL) a.out
fclean:
	$(DEL) *.o
	$(DEL) a.out
re: fclean all
test:
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_toupper.c tests/test_ft_toupper.c -o output/test_ft_toupper.out
	gcc $(FLAGS) -I $(HEADERS) srcs/ft_tolower.c tests/test_ft_tolower.c -o output/test_ft_tolower.out
clean_test:
	rm -f output/*.out
