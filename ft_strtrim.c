/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:29:06 by avan-ni           #+#    #+#             */
/*   Updated: 2018/06/02 17:20:31 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_count_nonspace(char const *s)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	if (!s)
		return (0);
	while (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
	{
		i++;
		len--;
	}
	while (*(s + i))
		i++;
	i--;
	while (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
    {
        i--;
        len--;
    }
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_count_nonspace(s);
	ft_putnbr((int)len);
	if (len == 0)
		return (ft_strnew(0));
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
		i++;
	while (len)
	{
		*(str + j++) = *(s + i++);
		len--;
	}
	return (str);
}

int main (void)
{
	ft_putstr(ft_strtrim("  \n\thello \t   alex  \t\n "));
	return (0);
}
