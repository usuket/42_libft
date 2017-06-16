#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strjoin"

int main()
{
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("#######################\n");

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = malloc(sizeof(char) * 10);

	str1 = "";
	str2 = "";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "";
	str2 = "0";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "0";
	str2 = "";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "0";
	str2 = "1";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "01234";
	str2 = "56789";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "\0";
	str2 = "\0";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "a\0";
	str2 = "b\0";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	str1 = "\0a";
	str2 = "\0b";
	printf("%s:%s:%s\n", str1, str2, ft_strjoin(str1, str2));

	return (0);
}