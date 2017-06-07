#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

int main() {
	printf("##########################\n");
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('Z'));

	printf("##########################\n");
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('@'));
	printf("%c\n", ft_tolower('['));
	printf("%c\n", ft_tolower('0'));
	printf("%c\n", ft_tolower('9'));
	return (0);
}