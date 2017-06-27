#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define TARGET ft_isalpha
#define EXPECTED isalpha

static int main() {
	printf("##########################\n");
	printf("%i:%i\n", TARGET('a') ,EXPECTED('a'));
	printf("%i:%i\n", TARGET('z') ,EXPECTED('z'));
	printf("%i:%i\n", TARGET('A') ,EXPECTED('A'));
	printf("%i:%i\n", TARGET('Z') ,EXPECTED('Z'));

	printf("##########################\n");
	printf("%i:%i\n", TARGET('@') ,EXPECTED('@'));
	printf("%i:%i\n", TARGET('[') ,EXPECTED('['));
	printf("%i:%i\n", TARGET('0') ,EXPECTED('0'));
	printf("%i:%i\n", TARGET('9') ,EXPECTED('9'));
	return (0);
}