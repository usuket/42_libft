#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_memalloc"

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str = "0123456789abcdef";
	str = (char *)ft_memalloc(10);
	write(1, str, 10);

	write(1, "\n", 1);

	str = "0123456789";
	write(1, str, 10);
	return (0);
}