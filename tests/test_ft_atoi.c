#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "libft.h"

int	main(void)
{
	char *inputs[24] = {
			"-2147483647",
			"2147483647",
			"-2147483648",
			"2147483648",
			"-9999999999",
			"9999999999",
			"0",
			"123hello",
			"hello123",
			"abc123def",
			"123abc456",
			"01234",
			"+1",
			"+abc",
			"-abc",
			"- 15",
			"-0152",
			"\t-0152",
			"\n-0152",
			" -0152",
			"9223372036854775807", // long max
			"-9223372036854775808", // long min
			"9223372036854775808", // TODO over long max
			"-9223372036854775809" // TODO over long min
	};
	int i = 0;
	printf("TESTS:\n");
	while (i < 24)
	{
		int a = atoi(inputs[i]);
		int b = ft_atoi(inputs[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12d - %12d - %s\x1B[0m\n", i, inputs[i], a, b, test);
		i++;
	}
	return (0);
}
