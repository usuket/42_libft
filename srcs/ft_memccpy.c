/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 10:40:17 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/11 10:40:18 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int			i;
	char		*de;
	const char	*sr;

	i = 0;
	de = (char *)dst;
	sr = (char *)src;
	while (i < (int)n)
	{
		de[i] = sr[i];
		i++;
		if (i < n && sr[i] == c)
		{
			de[i] = sr[i];
			break ;
		}
	}
	return (dst);
}
