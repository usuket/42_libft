/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 02:41:28 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/27 03:22:52 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_item;

	if ((new_item = (t_list *)malloc(sizeof(*new_item))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_item->content = NULL;
		new_item->content_size = 0;
	}
	else
	{
		if ((new_item->content = (t_list *)malloc(content_size)) == NULL)
		{
			free(new_item);
			return (NULL);
		}
		ft_memcpy(new_item->content, content, content_size);
		new_item->content_size = content_size;
	}
	new_item->next = NULL;
	return (new_item);
}
