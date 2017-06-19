#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_itoa"
#define TARGET ft_itoa

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");
	printf("#INDEX: EXPECTED : TARGET#\n");

	int i = -2147483648;
	printf("%i:%s;\n", i, TARGET(i));
	i = -1;
	printf("%i:%s;\n", i, TARGET(i));
	i = -0;
	printf("%i:%s;\n", i, TARGET(i));
	i = 0;
	printf("%i:%s;\n", i, TARGET(i));
	i = 1;
	printf("%i:%s;\n", i, TARGET(i));
	i = 2147483647;
	printf("%i:%s;\n", i, TARGET(i));

	// integer overflow
	i = (int)2147483648;
	printf("%i:%s;\n", i, TARGET(i));

	return (0);
}