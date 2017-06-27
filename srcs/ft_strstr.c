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

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (char *)(haystack + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}