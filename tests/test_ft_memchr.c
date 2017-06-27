#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_memchr"
#define TARGET ft_memchr
#define EXPECTED memchr

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");
	printf("#INDEX: EXPECTED : TARGET#\n");
	const char c = '5';

	char *ret1 = malloc(sizeof(char) * 11);
	char *ret2 = malloc(sizeof(char) * 11);

	for (int i = 0; i < 15; ++i) {
		ret1 = EXPECTED("0123456789", c, i);
		ret2 = TARGET("0123456789", c, i);
		printf("%i:%s:%s;\n", i, ret1, ret2);
	}

	return (0);
}