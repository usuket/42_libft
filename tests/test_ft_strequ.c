#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strequ"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);

	char *str1 = malloc(sizeof(char) * 11);
	char *str2 = malloc(sizeof(char) * 11);

	printf("#######################\n");
	printf("## Identical          #\n");
	printf("#######################\n");

	str1 = "abcde";
	str2 = "abcde";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	str1 = "aaaaaaaaaa\ta";
	str2 = "aaaaaaaaaa\ta";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	str1 = "a\0b";
	str2 = "a\0c";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	printf("#######################\n");
	printf("## Does not identical #\n");
	printf("#######################\n");

	str1 = "";
	str2 = "a";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	str1 = "aa";
	str2 = "ab";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	str1 = "aa";
	str2 = "aA";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	str1 = "aaaaaaaaaa\ta";
	str2 = "aaaaaaaaaa\tb";
	printf("%s:%s:%i\n", str1, str2, ft_strequ(str1, str2));

	return (0);
}