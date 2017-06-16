#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strsub"

int main()
{
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("#######################\n");

	char *str1 = "0123456789";
	char *sub;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			sub = ft_strsub(str1, i, j);
			printf("%i:%i\t%s:%s\n", i, j, str1, sub);
		}
	}

	printf("#######################\n");
	sub = ft_strsub(str1, 0, 10);
	printf("%i:%i\t%s:%s\n", 0, 10, str1, sub);

	sub = ft_strsub(str1, 1, 9);
	printf("%i:%i\t%s:%s\n", 1, 9, str1, sub);

	sub = ft_strsub(str1, 5, 5);
	printf("%i:%i\t%s:%s\n", 5, 5, str1, sub);

	sub = ft_strsub(str1, 9, 1);
	printf("%i:%i\t%s:%s\n", 9, 1, str1, sub);

	sub = ft_strsub(str1, 10, 0);
	printf("%i:%i\t%s:%s\n", 10, 0, str1, sub);

	printf("#######################\n");
	printf("## Exceptional test  ##\n");
	printf("#######################\n");

	printf("## un expected ##\n");
	sub = ft_strsub(str1, 20, 10);
	printf("%i:%i\t%s:%s\n", 0, -10, str1, sub);

	sub = ft_strsub(str1, 0, 20);
	printf("%i:%i\t%s:%s\n", 0, 20, str1, sub);

	sub = ft_strsub(str1, 0, -10);
	printf("%i:%i\t%s:%s\n", 0, -10, str1, sub);

	printf("## return null ##\n");
	sub = ft_strsub(str1, 0, SIZE_MAX);
	printf("%i:%llu\t%s:%s\t expect NULL\n", 0, SIZE_MAX, str1, sub);

	return (0);
}