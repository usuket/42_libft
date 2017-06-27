#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_striter"

static void print(char *c) {
	write(1, c, 1);
}

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str = malloc(sizeof(char) * 6);
	printf("## initialize ##\n");
	void *func = &print;
	ft_striter("abcde", func);
	return (0);
}