/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakakibarayusuke <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 00:16:37 by sakakibar         #+#    #+#             */
/*   Updated: 2017/06/27 00:16:38 by sakakibar        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int size;

	size = 0;
	while (needle[size] != '\0')
		size++;
	if (size == 0)
		return (char *)(haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (j == size)
				return (char *)(haystack + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
