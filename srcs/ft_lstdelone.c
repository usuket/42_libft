/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 02:39:59 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/27 02:40:00 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **link, void (*del)(void *, size_t))
{
	if (!link || !del)
		return ;
	del((*link)->content, (*link)->content_size);
	free(*link);
	*link = NULL;
	return ;
}