#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_lstnew"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	t_list *list = ft_lstnew("ABC", 3);
	printf("%s\n", list->content);

	t_list *list_null = ft_lstnew(NULL, 3);
	printf("%s\n", list_null->content);
	return (0);
}