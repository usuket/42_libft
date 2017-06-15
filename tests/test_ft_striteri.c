#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_striteri"

static void print(unsigned int idx,char *c) {
	char index = '0' + idx;
	write(1, &index, 1);
	write(1, "\t", 1);
	write(1, c, 1);
	write(1, "\n", 1);
}

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str = malloc(sizeof(char) * 6);
	printf("## initialize ##\n");
	void *func = &print;
	ft_striteri("abcde", func);
	return (0);
}