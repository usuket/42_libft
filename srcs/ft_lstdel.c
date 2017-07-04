/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 02:39:40 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/27 02:39:41 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstdel(t_list **link, void (*del)(void *, size_t))
{
	t_list	*next;

	while(*link != NULL)
	{
		next = (*link)->next;
		ft_lstdelone(link, del);
		*link = next;
	}
}
