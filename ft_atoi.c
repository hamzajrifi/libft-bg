/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:49:37 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/21 02:29:29 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	ft_skip(char *str)
{
	long	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == ' '
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	signe;
	long	rest;

	i = 0;
	signe = 1;
	rest = 0;
	i = ft_skip((char *)str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		rest = rest * 10 + (str[i] - 48);
		if (rest < -2147483648 && signe == -1)
			return (0);
		if (rest > 2147483647 && signe == 1)
			return (-1);
		i++;
	}
	return (rest * signe);
}
