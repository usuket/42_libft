#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define FUNCTION_NAME "ft_strsplit"

static void print_list(char **list)
{
    int i = 0;
    while (list[i]) {
        char *str = list[i];
        i++;
        printf("%s$\n", str);
    }
}

int main()
{
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("#######################\n");

	char **list = ft_strsplit("aaa,bbb,ccc", ',');
    print_list(list);
    printf("\n");
    list = ft_strsplit("0,,2,,4", ',');
    print_list(list);
    printf("#######################\n");
    list = ft_strsplit("0,,2,,4", ',');
    print_list(list);
    printf("#######################\n");

    char **list2 = ft_strsplit("ccc", ',');
    print_list(list2);
    printf("\n");
	return (0);
}