#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define TARGET ft_isdigit
#define EXPECTED isdigit

int main() {
	printf("##########################\n");
	for (int i = -10; i < 130; ++i) {
		printf("%i\t%i:%i\n", i, TARGET(i), EXPECTED(i));
	}
	return (0);
}