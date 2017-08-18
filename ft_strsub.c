/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 19:00:22 by ysakakib          #+#    #+#             */
/*   Updated: 2017/07/02 02:47:44 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_len;

	if (s == NULL)
		return (NULL);
	str_len = (char *)ft_memalloc(len + 1);
	if (str_len == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_len[i] = s[start + i];
		i++;
	}
	str_len[i] = '\0';
	return (str_len);
}
