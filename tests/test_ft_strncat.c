#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strncat"

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char str1[30] = "ABC";
	strncat(str1, "xyz", 2);
	printf("%s\n", str1);

	char str2[30] = "ABC";
	ft_strncat(str2, "xyz", 2);
	printf("%s\n", str2);

	return 0;
}