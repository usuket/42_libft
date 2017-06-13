#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "libft.h"

#define FUNCTION_NAME "ft_putnbr"
#define TARGET ft_putnbr

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	TARGET(INT_MIN);
	ft_putchar('\n');
	TARGET(0);
	ft_putchar('\n');
	TARGET(INT_MAX);
	ft_putchar('\n');

	return (0);
}