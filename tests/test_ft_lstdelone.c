#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_lstdelone"

int global_del_num = 0;

void del(void *d, size_t n) {
	free(d);
	(void) n;
	global_del_num++;
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
	ft_lstdelone(&list->next, del);

	if (list != NULL)
		printf("list 0 is not deleted sucess: %s\n", list->content);

	if (list->next == NULL)
		printf("list 1 is deleted sucess\n");

	printf("del_num:%i\n", global_del_num);
	char *result = global_del_num == 1 ? "Success\n" : "Fail\n";
	printf("%s", result);
	return (0);
}