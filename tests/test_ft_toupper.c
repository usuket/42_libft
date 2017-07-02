#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define TARGET ft_toupper

int main(void) {
	printf("##########################\n");
	printf("%c\n", TARGET('a'));
	printf("%c\n", TARGET('z'));

	printf("##########################\n");
	printf("%c\n", TARGET('A'));
	printf("%c\n", TARGET('Z'));
	printf("%c\n", TARGET('@'));
	printf("%c\n", TARGET('['));
	printf("%c\n", TARGET('0'));
	printf("%c\n", TARGET('9'));
	return (0);
}