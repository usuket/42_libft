NAME=libft
SRCS=srcs/*.c
HEADERS=headers/*.h
TEST=tests/*.c

FLAGS=-Wall -Wextra -std=c99

$(NAME):
	echo $(NAME)
	gcc $(FLAGS) $(SRCS) -I $(HEADERS)
all:
	ls -la $(SRCS)
clean:
	rm -f *.o
fclean:
	rm -f *.o
re:fclean $(NAME)
test:
	gcc $(FLAGS) $(SRCS) -I $(HEADERS)
