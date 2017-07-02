#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strnequ"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);

	char	*str1 = malloc(sizeof(char) * 11);
	char	*str2 = malloc(sizeof(char) * 11);
	int		n = 0;
	printf("#######################\n");
	printf("## Identical          #\n");
	printf("#######################\n");

	str1 = "abcde";
	str2 = "abcde";
	n = 0;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	str1 = "aaaaaaaaaa\ta";
	str2 = "aaaaaaaaaa\ta";
	n = 100;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	str1 = "a\0b";
	str2 = "a\0c";
	n = 3;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

    str1 = "0123abcdef";
    str2 = "0123456789";
    n = 4;
    printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	printf("#######################\n");
	printf("## Does not identical #\n");
	printf("#######################\n");

	str1 = "";
	str2 = "a";
	n = 2;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	str1 = "aa";
	str2 = "ab";
	n = 2;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	str1 = "aa";
	str2 = "aA";
	n = 2;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	str1 = "aaaaaaaaaa\ta";
	str2 = "aaaaaaaaaa\tb";
	n = 20;
	printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

    str1 = "0123abcdef";
    str2 = "0123456789";
    n = 5;
    printf("%s:%s:%i\n", str1, str2, ft_strnequ(str1, str2, n));

	return (0);
}