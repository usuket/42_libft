#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define TARGET ft_isprint
#define EXPECTED isprint

static int main() {
	printf("##########################\n");
	for (int i = -10; i < 130; ++i) {
		printf("%i\t%i:%i\n", i, TARGET(i), EXPECTED(i));
	}
	return (0);
}