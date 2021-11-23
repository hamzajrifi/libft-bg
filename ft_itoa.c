/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:30:18 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/16 16:50:52 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nchar(int k)
{
	int				i;
	unsigned int	n;

	n = k;
	i = 1;
	if (k < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_copy(char *str, int len, int h, unsigned int k)
{
	while (len >= h)
	{
		str[len] = (k % 10) + '0';
		k = k / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	int				h;
	unsigned int	k;

	k = n;
	h = 0;
	len = ft_nchar(k);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		h = 1;
		str[0] = '-';
		k = -k;
	}
	str[len] = '\0';
	len = len - 1;
	str = ft_copy(str, len, h, k);
	return (str);
}
