#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strcat"

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char str1[30] = "ABC";


	strcat(str1, "xyz");
	printf("%s\n", str1);

	char str2[30] = "ABC";
	ft_strcat(str2, "xyz");
	printf("%s\n", str2);

	return 0;
}