/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:38:11 by avan-ni           #+#    #+#             */
/*   Updated: 2018/06/02 19:35:27 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_count_char(int n)
{
	int		count;
	int		sign;

	sign = 1;
	count = 0;
	if (n < 0)
	{
		sign = -1;
		n = n * sign;
		count++;
	}
	while (n / 10 >= 1)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

long int	ft_abs(long int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int 	num;
	size_t		len;
	size_t		i;

	i = 0;
	num = (long int)n;
	len = (size_t)(ft_count_char(n)); 
	if(!(str = ft_strnew(len)))
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
		i = 1;
	}
	while (len > i)
	{
		*(str + len-- -1) = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
