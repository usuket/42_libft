#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_memmove"
#define TARGET ft_memmove
#define EXPECTED memmove

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");
	printf("#INDEX: EXPECTED : TARGET#\n");
	char *str1 = malloc(sizeof(char) * 11);
	char *str2 = malloc(sizeof(char) * 11);
	const char *SRC = "abcdefghij";

	for (int i = 0; i < 15; ++i) {
		strcpy(str1, "0123456789");
		strcpy(str2, "0123456789");
		EXPECTED(str1, SRC, i);
		TARGET(str2, SRC, i);
		printf("%i:%s:%s;\n", i, str1, str2);
	}

	printf("##########################\n");
	// contain \0
	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");

	EXPECTED(str1, "abcde\012345", 16);
	TARGET(str2, "abcde\012345", 16);
	printf("%i:%s:%s;\n", 16, str1, str2);

	printf("##########################\n");
	// src and dst is a same pointer
	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");

	EXPECTED(str1, SRC, 15);
	TARGET(str2, SRC, 15);
	printf("%i:%s:%s;\n", 17, str1, str2);

	free(str1);
	free(str2);

	return (0);
}