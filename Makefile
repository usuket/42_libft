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
#FLAGS=-Wall -Wextra -Werror -std=c99
FLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME):
	gcc -c $(FLAGS) $(SRCS) -I $(HEADERS)
	ar rcs $(NAME) *.o
	ranlib $(NAME)
clean:
	$(DEL) *.o
fclean: clean
	$(DEL) $(NAME)
re: fclean all
test: fclean all
	echo "mandatory"
	gcc libft.a -I headers srcs/ft_memset.c tests/test_ft_memset.c -o output/test_ft_memset.out
	gcc libft.a -I headers srcs/ft_bzero.c tests/test_ft_bzero.c -o output/test_ft_bzero.out
	gcc libft.a -I headers srcs/ft_memcpy.c tests/test_ft_memcpy.c -o output/test_ft_memcpy.out
	gcc libft.a -I headers srcs/ft_memccpy.c tests/test_ft_memccpy.c -o output/test_ft_memccpy.out
	gcc libft.a -I headers srcs/ft_memmove.c tests/test_ft_memmove.c -o output/test_ft_memmove.out
	gcc libft.a -I headers srcs/ft_memchr.c tests/test_ft_memchr.c -o output/test_ft_memchr.out
	gcc libft.a -I headers srcs/ft_memcmp.c tests/test_ft_memcmp.c -o output/test_ft_memcmp.out
	gcc libft.a -I headers srcs/ft_strdup.c tests/test_ft_strdup.c -o output/test_ft_strdup.out
	gcc libft.a -I headers srcs/ft_strcpy.c tests/test_ft_strcpy.c -o output/test_ft_strcpy.out
	gcc libft.a -I headers srcs/ft_strncpy.c tests/test_ft_strncpy.c -o output/test_ft_strncpy.out
	gcc libft.a -I headers srcs/ft_strcat.c tests/test_ft_strcat.c -o output/test_ft_strcat.out
	gcc libft.a -I headers srcs/ft_strncat.c tests/test_ft_strncat.c -o output/test_ft_strncat.out
	gcc libft.a -I headers srcs/ft_strlcat.c tests/test_ft_strlcat.c -o output/test_ft_strlcat.out
	gcc libft.a -I headers srcs/ft_strchr.c tests/test_ft_strchr.c -o output/test_ft_strchr.out
	gcc libft.a -I headers srcs/ft_strrchr.c tests/test_ft_strrchr.c -o output/test_ft_strrchr.out
	gcc libft.a -I headers srcs/ft_strstr.c tests/test_ft_strstr.c -o output/test_ft_strstr.out
	gcc libft.a -I headers srcs/ft_strnstr.c tests/test_ft_strnstr.c -o output/test_ft_strnstr.out
	gcc libft.a -I headers srcs/ft_strcmp.c tests/test_ft_strcmp.c -o output/test_ft_strcmp.out
	gcc libft.a -I headers srcs/ft_strncmp.c tests/test_ft_strncmp.c -o output/test_ft_strncmp.out
	gcc libft.a -I headers srcs/ft_atoi.c tests/test_ft_atoi.c -o output/test_ft_atoi.out
	gcc libft.a -I headers srcs/ft_isalnum.c tests/test_ft_isalnum.c -o output/test_ft_isalnum.out
	gcc libft.a -I headers srcs/ft_isprint.c tests/test_ft_isprint.c -o output/test_ft_isprint.out
	gcc libft.a -I headers srcs/ft_isdigit.c tests/test_ft_isdigit.c -o output/test_ft_isdigit.out
	gcc libft.a -I headers srcs/ft_isascii.c tests/test_ft_isascii.c -o output/test_ft_isascii.out
	gcc libft.a -I headers srcs/ft_isalpha.c tests/test_ft_isalpha.c -o output/test_ft_isalpha.out
	gcc libft.a -I headers srcs/ft_strlen.c tests/test_ft_strlen.c -o output/test_ft_strlen.out
	gcc libft.a -I headers srcs/ft_toupper.c tests/test_ft_toupper.c -o output/test_ft_toupper.out
	gcc libft.a -I headers srcs/ft_tolower.c tests/test_ft_tolower.c -o output/test_ft_tolower.out
	echo "additional"
	gcc libft.a -I headers srcs/ft_memalloc.c tests/test_ft_memalloc.c -o output/test_ft_memalloc.out
	gcc libft.a -I headers srcs/ft_memdel.c tests/test_ft_memdel.c -o output/test_ft_memdel.out
	gcc libft.a -I headers srcs/ft_strnew.c tests/test_ft_strnew.c -o output/test_ft_strnew.out
	gcc libft.a -I headers srcs/ft_strdel.c tests/test_ft_strdel.c -o output/test_ft_strdel.out
	gcc libft.a -I headers srcs/ft_strclr.c tests/test_ft_strclr.c -o output/test_ft_strclr.out
	gcc libft.a -I headers srcs/ft_striter.c tests/test_ft_striter.c -o output/test_ft_striter.out
	gcc libft.a -I headers srcs/ft_striteri.c tests/test_ft_striteri.c -o output/test_ft_striteri.out
	gcc libft.a -I headers srcs/ft_strmap.c tests/test_ft_strmap.c -o output/test_ft_strmap.out
	gcc libft.a -I headers srcs/ft_strmapi.c tests/test_ft_strmapi.c -o output/test_ft_strmapi.out
	gcc libft.a -I headers srcs/ft_strequ.c tests/test_ft_strequ.c -o output/test_ft_strequ.out
	gcc libft.a -I headers srcs/ft_strnequ.c tests/test_ft_strnequ.c -o output/test_ft_strnequ.out
	gcc libft.a -I headers srcs/ft_strsub.c tests/test_ft_strsub.c -o output/test_ft_strsub.out
	gcc libft.a -I headers srcs/ft_strjoin.c tests/test_ft_strjoin.c -o output/test_ft_strjoin.out
	gcc libft.a -I headers srcs/ft_strtrim.c tests/test_ft_strtrim.c -o output/test_ft_strtrim.out
	gcc libft.a -I headers srcs/ft_strsplit.c tests/test_ft_strsplit.c -o output/test_ft_strsplit.out
	gcc libft.a -I headers srcs/ft_itoa.c tests/test_ft_itoa.c -o output/test_ft_itoa.out
	gcc libft.a -I headers srcs/ft_putchar.c tests/test_ft_putchar.c -o output/test_ft_putchar.out
	gcc libft.a -I headers srcs/ft_putnbr.c tests/test_ft_putnbr.c -o output/test_ft_putnbr.out
	gcc libft.a -I headers srcs/ft_putstr.c tests/test_ft_putstr.c -o output/test_ft_putstr.out
	gcc libft.a -I headers srcs/ft_putendl.c tests/test_ft_putendl.c -o output/test_ft_putendl.out
	gcc libft.a -I headers srcs/ft_putchar_fd.c tests/test_ft_putchar_fd.c -o output/test_ft_putchar_fd.out
	gcc libft.a -I headers srcs/ft_putstr_fd.c tests/test_ft_putstr_fd.c -o output/test_ft_putstr_fd.out
	gcc libft.a -I headers srcs/ft_putendl_fd.c tests/test_ft_putendl_fd.c -o output/test_ft_putendl_fd.out
	gcc libft.a -I headers srcs/ft_putnbr_fd.c tests/test_ft_putnbr_fd.c -o output/test_ft_putnbr_fd.out
	gcc libft.a -I headers srcs/ft_strdup.c tests/test_ft_strdup.c -o output/test_ft_strdup.out
test_clean:
	rm -f output/*.out


