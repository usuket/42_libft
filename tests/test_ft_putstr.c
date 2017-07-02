#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_putstr"
#define TARGET ft_putstr

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	TARGET("#putstr#qwertyuiop\t[]asdfghjkl;'zxcvbnm,./\n");
	printf("#printf#qwertyuiop\t[]asdfghjkl;'zxcvbnm,./\n");

	return (0);
}