/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 19:08:53 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/14 19:08:55 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*str;
	int		i;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len && *s)
	{
		str[i] = f(*s);
		s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
