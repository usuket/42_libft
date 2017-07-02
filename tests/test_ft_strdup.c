#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strdup"
#define TARGET ft_strdup
#define EXPECTED strdup

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char * str1 = "str1";
	char * str2 = "str2";
	str2 = ft_strdup(str1);
	str1 = "remove\0";

	printf("%i\t%s:%s\n", 1, str1, str2);

	// should clash
	str2 = ft_strdup(((void *)0));
	str1 = "remove\0";
	printf("%i\t%s:%s\n", 1, str1, str2);

	return (0);
}