#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strtrim"

static int main()
{
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("#######################\n");

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = malloc(sizeof(char) * 10);

	str1 = "0";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = " a ";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = " a b";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = " a b ";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = " a b c ";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	printf("## Multiple ##\n");

	str1 = "  a b";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = "a b  ";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = "          a b        ";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	printf("## TAB and RETURN ##\n");

	str1 = "\ta\tb\t";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = "\t\ta\t\tb\t\t";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = "  \t\ta\t\tb   ";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	str1 = "\na\tb\n";
	printf("%s:%s$\n", str1, ft_strtrim(str1));

	return (0);
}