#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strdel"

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str = malloc(sizeof(char) * 6);
	char **str_p = &str;
	strcpy(str,"abcde");
	printf("%i\t%s\n", 1, str);
	ft_strdel(str_p);
	printf("%i\t%s\n", 2, str);
	return (0);
}