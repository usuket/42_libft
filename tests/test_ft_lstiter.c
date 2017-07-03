#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_lstiter"

int iter_num = 0;

void fun(t_list *elem) {
	printf("%s\n",(char *)elem->content);
	iter_num++;
}

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	t_list *list = ft_lstnew("012", 3);
	list->next = ft_lstnew("ABC", 3);
	list->next->next = ft_lstnew("DEF", 3);

	printf("# Initialize \n");
	printf("%s\n", list->content);
	printf("%s\n", list->next->content);
	printf("%s\n", list->next->next->content);

	printf("######################\n");
	ft_lstiter(list, fun);

	char *result = iter_num == 3 ? "Success\n" : "Fail\n";
	printf("%s", result);
	return (0);
}