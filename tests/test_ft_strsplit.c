#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strsplit"

int main()
{
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("#######################\n");

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = malloc(sizeof(char) * 10);

	str1 = "\na\tb\n";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	return (0);
}