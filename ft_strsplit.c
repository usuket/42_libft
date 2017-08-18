/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 21:33:34 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/15 21:33:36 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		nb_word;
	int		len_word;
	int		max_len_word;

	if (!s || !c)
		return (NULL);
	i = 0;
	nb_word = 0;
	max_len_word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			nb_word++;
			len_word = 0;
			while (s[i] != c && s[i++])
				len_word++;
			if (len_word > max_len_word)
				max_len_word = len_word;
		}
	}
	return (ft_wordtoary(s, c, nb_word, max_len_word));
}
