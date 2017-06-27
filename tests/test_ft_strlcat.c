#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strlcat"

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char str1[30] = "ABCDE";
	int len1 = strlcat(str1, "xyz", 4);
	printf("len %i:%s\n", len1, str1);

	char str2[30] = "ABCED";
	int len2 = ft_strlcat(str2, "xyz", 4);
	printf("len %i:%s\n", len2, str2);

	char str3[30] = "ABCDE";
	int len3 = strlcat(str3, "01234", 8);
	printf("len %i:%s\n", len3, str3);

	char str4[30] = "ABCED";
	int len4 = ft_strlcat(str4, "01234", 8);
	printf("len %i:%s\n", len4, str4);

	return 0;
}