#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strstr"
// The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str1 = malloc(sizeof(char) * 20);
	str1 = strstr("abcde0123fghi", "0123");
	printf("%s\n", str1);

	char *str2 = malloc(sizeof(char) * 20);
	str2= ft_strstr("abcde0123fghi", "0123");
	printf("%s\n", str2);

	char *str3 = malloc(sizeof(char) * 20);
	str3 = strstr("", "01234");
	printf("%s\n", str3);

	char *str4 = malloc(sizeof(char) * 20);
	str4 = ft_strstr(str4, "01234");
	printf("%s\n", str4);

	return 0;
}