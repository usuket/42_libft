#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strncmp"

static int main() {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

    printf("%d:%d\n", strncmp("a","b",0),ft_strncmp("a","b",0));
    printf("%d:%d\n", strncmp("a","b",1),ft_strncmp("a","b",1));
    printf("%d:%d\n", strncmp("b","b",1),ft_strncmp("b","b",1));
    printf("%d:%d\n", strncmp("c","b",0),ft_strncmp("c","b",0));
    printf("%d:%d\n", strncmp("c","b",1),ft_strncmp("c","b",1));
    printf("%d:%d\n", strncmp("c","b",2),ft_strncmp("c","b",2));
    printf("%d:%d\n", strncmp("abcde","",1),ft_strncmp("abcde","",1));
    printf("%d:%d\n", strncmp("abcde","\0",1),ft_strncmp("abcde","\0",1));
    printf("%d:%d\n", strncmp("abcde","b",1),ft_strncmp("abcde","b",1));
    printf("%d:%d\n", strncmp("abcde","cd",1),ft_strncmp("abcde","cd",1));
    printf("%d:%d\n", strncmp("abcde","cde",2),ft_strncmp("abcde","cde",2));
    printf("%d:%d\n", strncmp("abcde","cdefg",3),ft_strncmp("abcde","cdefg",3));
    printf("%d:%d\n", strncmp("abcde","cdefgh",10),ft_strncmp("abcde","cdefgh",10));
    return (0);
}
