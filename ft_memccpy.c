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
	size_t				i;
	unsigned char		*de;
	unsigned char		*sr;

	i = 0;
	de = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (i < n)
	{
		de[i] = sr[i];
		if (sr[i] == (unsigned char)c)
			return (de + i + 1);
		i++;
	}
	return (NULL);
}
