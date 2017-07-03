#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_lstmap"

static void fun(t_list *elem) {
	printf("%s\n", (char *) elem->content);
}

static t_list *map(t_list *elem) {
	char *str = malloc(sizeof(char) * 10);
	strcpy(str, "mapped_");
	strcat(str, elem->content);
	elem->content = str;
	elem->content_size = sizeof(char) * 10;
	return elem;
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

	printf("######################\n");
	printf("# MAP #\n");
	printf("######################\n");
	ft_lstmap(list, map);
	ft_lstiter(list, fun);
	return (0);
}