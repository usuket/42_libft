/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 19:52:01 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/14 19:52:05 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*str;
	int		i;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len && *s)
	{
		str[i] = f(i, *s);
		s++;
		i++;
	}
	return (str);
}
