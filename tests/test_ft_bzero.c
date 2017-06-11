#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_bzero"
#define TARGET ft_bzero
#define EXPECTED bzero

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");
	printf("#INDEX: EXPECTED : TARGET#\n");
	char* str1 = malloc(sizeof(char) * 11);
	char* str2 = malloc(sizeof(char) * 11);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, 5);
	TARGET(str2, 5);
	printf("%i:%s:%s;\n", 1, str1, str2);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, 10);
	TARGET(str2, 10);
	printf("%i:%s:%s;\n", 2, str1, str2);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, 0);
	TARGET(str2, 0);
	printf("%i:%s:%s;\n", 3, str1, str2);

	strcpy(str1, "0123456789");
	strcpy(str2, "0123456789");
	EXPECTED(str1, 1);
	TARGET(str2, 1);
	printf("%i:%s:%s;\n", 4, str1, str2);

	free(str1);
	free(str2);

	return (0);
}