/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:33:08 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/21 01:51:37 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	len_s;

	j = 0;
	len_s = 0;
	lendst = ft_strlen(dst);
	i = ft_strlen(dst);
	while (src[len_s] != '\0')
		len_s++;
	if (dstsize == 0 || dstsize <= lendst)
		return (dstsize + len_s);
	while (src[j] && ((dstsize - lendst > 1)))
	{
		dst[i] = src[j];
		i++;
		j++;
		dstsize--;
	}
	dst[i] = '\0';
	return (lendst + len_s);
}
