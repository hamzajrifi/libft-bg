/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:58:24 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/07 11:03:14 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	char	*src;
	size_t	i;
	size_t	j;
	size_t	len_ndl;

	len_ndl = ft_strlen((char *)needle);
	src = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (src);
	while ((haystack[i] != '\0') && loc >= i + len_ndl)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return (src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
