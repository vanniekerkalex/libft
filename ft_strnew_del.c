/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:05:21 by avan-ni           #+#    #+#             */
/*   Updated: 2018/06/06 16:32:58 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew_del(char *s, char c)
{
	size_t i;

	i = 0;
	while (*(s + i) != c && *(s + i))
		i++;
	if (i == ft_strlen(s))
		return (s);
	else if (i == 0)
		return (NULL);
	else
		return (ft_strndup((const char *)s, i));
}
