/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:18:26 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/06 17:35:56 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

	i = 0;
	cdest = (char *)dst;
	csrc = (char *)src;
	if (cdest == 0 && csrc == 0)
		return (NULL);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dst);
}
