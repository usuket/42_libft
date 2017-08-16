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

SRCS = *.c

DEL = rm -f
FLAGS = -Wall -Wextra -Werror
$(NAME):
	gcc -c $(FLAGS) *.c libft.h
	ar rcs $(NAME) *.o
	ranlib $(NAME)
all: $(NAME)
clean:
	$(DEL) *.o
fclean: clean
	$(DEL) $(NAME)
re: fclean all
test_clean:
	rm output/*.out


