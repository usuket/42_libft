/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 17:33:24 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/15 17:34:32 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int str_len1;
	int str_len2;
	int i;

	str_len1 = ft_strlen(s1);
	str_len2 = ft_strlen(s2);
	if (str_len1 != str_len2)
		return (0);
	i = 0;
	while ((i < (int)n) && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		i++;
		s1++;
		s2++;
	}
	return (1);
}
