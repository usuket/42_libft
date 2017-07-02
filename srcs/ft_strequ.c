/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 16:59:56 by ysakakib          #+#    #+#             */
/*   Updated: 2017/07/02 02:47:44 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int str_len1;
	int str_len2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str_len1 = ft_strlen(s1);
	str_len2 = ft_strlen(s2);
	if (str_len1 != str_len2)
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}
