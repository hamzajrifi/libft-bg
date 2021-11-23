/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:01:14 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/19 15:06:01 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tab;

	tab = (char *)s;
	i = 0;
	while (tab[i])
	{
		if (tab[i] == (char)c)
			return (&tab[i]);
		i++;
	}
	if (c == '\0')
		return (&tab[i]);
	return (NULL);
}
