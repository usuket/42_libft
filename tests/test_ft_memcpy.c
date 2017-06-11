#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_memcpy"
#define TARGET ft_memcpy
#define EXPECTED memcpy

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");
	printf("#INDEX: EXPECTED : TARGET#\n");
	char *str1 = malloc(sizeof(char) * 11);
	char *str2 = malloc(sizeof(char) * 11);
	const char *SRC = "abcdefghij";

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, SRC, 0);
	TARGET(str2, SRC, 0);
	printf("%i:%s:%s;\n", 1, str1, str2);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, SRC, 5);
	TARGET(str2, SRC, 5);
	printf("%i:%s:%s;\n", 2, str1, str2);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, SRC,  10);
	TARGET(str2, SRC,  10);
	printf("%i:%s:%s;\n", 3, str1, str2);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, SRC, 15);
	TARGET(str2, SRC, 15);
	printf("%i:%s:%s;\n", 4, str1, str2);

	// src and dst is a same pointer
	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, SRC, 15);
	TARGET(str2, SRC, 15);
	printf("%i:%s:%s;\n", 5, str1, str2);

	free(str1);
	free(str2);

	return (0);
}