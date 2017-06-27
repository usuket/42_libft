#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strrchr"

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	char *p1 = strrchr("abcabcde", 'c');
	printf("%s\n", p1);

	char *p2 = ft_strrchr("abcabcde", 'c');
	printf("%s\n", p2);

	char *p3 = strrchr("abcabcde", 'z');
	printf("%s\n", p3);

	char *p4 = ft_strrchr("abcabcde", 'z');
	printf("%s\n", p4);

	return 0;
}