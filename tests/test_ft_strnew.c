#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strnew"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str = ft_strnew(5);

	// initialized by \0
	printf("%i\t%s\n", 1, str);

	str = "01234";
	printf("%i\t%s\n", 2, str);
	return (0);
}