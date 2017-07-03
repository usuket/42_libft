/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 02:41:00 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/27 02:41:01 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_item;
	t_list	*first;

	first = NULL;
	new_item = f(lst);
	first = new_item;
	while (lst->next != NULL)
	{
		new_item->next = f(lst->next);
		new_item = new_item->next;
		lst = lst->next;
	}
	return (first);
}