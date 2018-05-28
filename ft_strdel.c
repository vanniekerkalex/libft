/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:35:53 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/28 11:36:00 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strdel(char **as)
{
	int count;

	int = 0;
	while (*as)
	{
		while (**as)
		{
			free (**as);
			*as++;
		}
		as++;
		count++;
	}
	as = as - count;
       	as = NULL;
}
