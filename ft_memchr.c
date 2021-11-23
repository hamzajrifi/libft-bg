/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:34:28 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/19 15:07:09 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		if (tab[i] == ((unsigned char )c))
			return (&tab[i]);
		i++;
	}
	return (NULL);
}
