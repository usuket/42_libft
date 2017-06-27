#include <stdio.h>
#include <string.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strcmp"

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	printf("%d:%d\n", strcmp("abcde", "abcde"), ft_strcmp("abcde", "abcde"));
	printf("%d:%d\n", strcmp("a", "b"), ft_strcmp("a", "b"));
	printf("%d:%d\n", strcmp("b", "b"), ft_strcmp("b", "b"));
	printf("%d:%d\n", strcmp("c", "b"), ft_strcmp("c", "b"));
	printf("%d:%d\n", strcmp("abcde", ""), ft_strcmp("abcde", ""));
	printf("%d:%d\n", strcmp("abcde", "\0"), ft_strcmp("abcde", "\0"));
	printf("%d:%d\n", strcmp("abcde", "b"), ft_strcmp("abcde", "b"));
	printf("%d:%d\n", strcmp("abcde", "cd"), ft_strcmp("abcde", "cd"));
	printf("%d:%d\n", strcmp("abcde", "cde"), ft_strcmp("abcde", "cde"));
	printf("%d:%d\n", strcmp("abcde", "cdefg"), ft_strcmp("abcde", "cdefg"));
	printf("%d:%d\n", strcmp("abcde", "cdefgh"), ft_strcmp("abcde", "cdefgh"));
	return (0);
}