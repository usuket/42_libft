/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 02:39:18 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/27 02:39:21 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd(t_list**alst,t_list *new_list)
{
	if (*alst != NULL)
		new_list->next = *alst;
	*alst = new_list;
}