/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:05:40 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/12 16:05:42 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*str;

	i = 0;
	str = (char *)s;
	while (i < (int)n)
	{
		if (str[i] == c)
		{
			return (void *)s + i;
		}
		i++;
	}
	return (NULL);
}
