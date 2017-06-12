#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_memcmp"
#define TARGET ft_memcmp
#define EXPECTED memcmp

int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");
	printf("#INDEX: EXPECTED : TARGET#\n");
	int ret1 = 0;
	int ret2 = 0;

	int i = 0;
	ret1 = EXPECTED("0", "", i);
	ret2 = TARGET("0", "", i);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 1;
	ret1 = EXPECTED("0", "0", i);
	ret2 = TARGET("0", "0", i);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 2;
	ret1 = EXPECTED("00", "01", i);
	ret2 = TARGET("00", "01", i);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 3;
	ret1 = EXPECTED("aa", "01", i);
	ret2 = TARGET("aa", "01", i);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 4;
	ret1 = EXPECTED("a", "zz", i);
	ret2 = TARGET("a", "zz", i);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 5;
	ret1 = EXPECTED("a", "zz", -1);
	ret2 = TARGET("a", "zz", -1);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 6;
	ret1 = EXPECTED("a\0b", "a\0b", 3);
	ret2 = TARGET("a\0b", "a\0b", 3);
	printf("%i:%i:%i;\n", i, ret1, ret2);

	i = 7;
	ret1 = EXPECTED("a\0b", "a\0Z", 3);
	ret2 = TARGET("a\0b", "a\0Z", 3);
	printf("%i:%i:%i;\n", i, ret1, ret2);


	return (0);
}