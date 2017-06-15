#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strmap"

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	printf("## initialize ##\n");
	char *str = "abcde";
	printf("%s\n", str);
	void *func = &toupper;
	str = ft_strmap(str, func);
	printf("## affected ##\n");
	printf("%s\n", str);
	return (0);
}