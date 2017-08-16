/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 10:40:17 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/11 10:40:18 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (d <= s || s >= (d + len))
	{
		while (len)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len)
		{
			*d-- = *s--;
			len--;
		}
	}
	return (dst);
}
