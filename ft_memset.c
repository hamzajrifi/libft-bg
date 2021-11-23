/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:10:17 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/04 08:45:52 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		tab[i] = (char)c;
		i++;
	}	
	return (str);
}
