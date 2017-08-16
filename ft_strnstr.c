/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakakibarayusuke <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 00:46:43 by sakakibar         #+#    #+#             */
/*   Updated: 2017/06/27 00:46:44 by sakakibar        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len2;

	if (*needle == '\0')
		return ((char *)haystack);
	len2 = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= len2)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, len2) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
