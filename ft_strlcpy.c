/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:43:36 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/16 19:10:38 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	dstsize -= 1;
	while ((src[i] != '\0') && (i < dstsize) && (dstsize + 1) != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if ((dstsize + 1) != '\0')
		dst[i] = '\0';
	return (ft_strlen((char *)src));
}
