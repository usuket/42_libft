/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 00:10:26 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/07 00:10:31 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
