/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:42:41 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/09 10:21:38 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	size_t	i;

	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	if (cdst == 0 && csrc == 0)
		return (NULL);
	if (cdst > csrc)
	{
		i = len;
		while (i-- > 0)
			cdst[i] = csrc[i];
	}
	else if (cdst < csrc || csrc[i])
	{
		ft_memcpy(dst, src, len);
	}		
	return (dst);
}
