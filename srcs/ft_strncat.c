/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakakibarayusuke <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 17:55:01 by sakakibar         #+#    #+#             */
/*   Updated: 2017/06/25 17:55:02 by sakakibar        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n) {
	int destlen;
	int srclen;
	int i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *) src);
	while ((destlen <= (destlen + srclen)) && ((int) n > 0)) {
		dest[destlen] = src[i];
		destlen++;
		srclen--;
		i++;
		n--;
	}
	dest[destlen] = '\0';
	return (dest);
}

