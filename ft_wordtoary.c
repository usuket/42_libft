/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordtoary.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 10:10:46 by ysakakib          #+#    #+#             */
/*   Updated: 2017/08/18 15:01:47 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_wordtoary(const char *s, char c, int nb_word, int word_len)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	if (!(array = (char **)malloc(sizeof(*array) * nb_word + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			if (!(array[j] = (char *)malloc(sizeof(**array) * word_len + 1)))
				return (NULL);
			while (s[i] != c && s[i])
				array[j][k++] = s[i++];
			array[j++][k] = '\0';
		}
	}
	array[j] = 0;
	return (array);
}
