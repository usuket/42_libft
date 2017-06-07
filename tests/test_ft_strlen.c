#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

int main() {
	const int max = 10;
	char c = 'X';

	char *str2 = malloc(max + 1);
	for (int i = 0; i < max; i++) {
		str2[i] = c;
		str2[i + 1] = '\0';

		int len1 = ft_strlen(str2);
		int len2 = strlen(str2);

		printf("%d:%s:%d:%d\n", i, str2, len1, len2);
	}
	return 0;
}
