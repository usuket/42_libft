#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_memset"
#define TARGET ft_memset
#define EXPECTED memset

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char str1[] = "0123456789";
	memset(str1 + 2, 'c', 5);

	char str2[] = "0123456789";
	ft_memset(str2 + 2, 'c', 5);

	printf("%i\t%s:%s\n", 1, str1, str2);
	return (0);
}