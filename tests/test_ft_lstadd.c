#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

#define FUNCTION_NAME "ft_lstadd"

int main(void) {
	printf("## TEST %s ##\n", FUNCTION_NAME);
	printf("##########################\n");

	t_list *list0 = ft_lstnew("0", 3);
	t_list *list1 = ft_lstnew("ABC", 3);
	t_list *list2 = ft_lstnew("0123", 3);
	t_list *list3 = ft_lstnew(NULL, 3);

	printf("# Initialize \n");
	printf("%s\n", list0->content);
	printf("%s\n", list1->content);
	printf("%s\n", list2->content);
	printf("%s\n", list3->content);

	// Add child to node.
	ft_lstadd(&list3, list2);
	ft_lstadd(&list2, list1);
	ft_lstadd(&list1, list0);
	printf("######################\n");
	printf("%s\n", list0->content);
	printf("%s\n", list0->next->content);
	printf("%s\n", list0->next->next->content);
	printf("%s\n", list0->next->next->next->content);
	return (0);
}