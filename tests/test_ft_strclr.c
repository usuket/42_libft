#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strclr"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *str = malloc(sizeof(char) * 6);
	printf("## initialize ##\n");
	strcpy(str,"abcde");
	printf("%i\t%s\n", 1, str);
	printf("## ft_strclr ##\n");
	ft_strclr(str);
	printf("%i\t%s\n", 2, str);

	printf("## if true pointer is '\\0' ##\n");

	for (int i = 0; i < 5; ++i) {
		if (str[0] == '\0')
			printf("%i\t%s\n", i, "true");
	}

	return (0);
}