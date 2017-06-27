#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strmapi"

static char odd_upper(unsigned int idx, char *c) {
	if (idx % 2 == 0)
		return (char) ft_toupper((int) c);
	return ((char) c);
}

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	printf("## initialize ##\n");
	char *str = "abcde";
	printf("%s\n", str);
	void *func = &odd_upper;
	int max = 3;
	str = ft_strmapi(str, func);
	printf("## affected ##\n");
	printf("%s\n", str);
	return (0);
}