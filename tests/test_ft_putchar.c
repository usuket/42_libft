#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_putchar"
#define TARGET ft_putchar
#define EXPECT putchar

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	for (int i = 0; i <= 127; ++i) {
		TARGET(i);
	}
	TARGET('\n');

	for (int i = 0; i <= 127; ++i) {
		EXPECT(i);
	}
	EXPECT('\n');

	return (0);
}