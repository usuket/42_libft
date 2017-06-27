/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 20:16:07 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/15 20:16:11 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_white_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int		calc_front_trim_size(const char *s, const int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (is_white_space(s[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int		calc_end_trim_size(const char *s, const int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (is_white_space(s[len - i - 1]))
			i++;
		else
			break ;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t		len;
	int			i;
	char		*str;
	int			front;
	int			end;

	len = ft_strlen(s);
	front = calc_front_trim_size(s, len);
	end = calc_end_trim_size(s, len);
	str = (char *)ft_memalloc(len - (front + end) + 1);
	i = 0;
	if (len - front <= 0)
		return (ft_strdup(""));
	while ((unsigned int)i < len - (front + end))
	{
		str[i] = s[front + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
