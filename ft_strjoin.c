/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:29:16 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/11 12:39:51 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	int		len;
	int		len1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen((char *)s1);
	len1 = ft_strlen((char *)s2);
	ptr = (char *)malloc(sizeof(char) * (len + len1 + 1));
	if (!ptr)
		return (NULL);
	*ptr = '\0';
	ft_strlcat(ptr, (char *)s1, len + 1);
	ft_strlcat(ptr, (char *)s2, len + len1 + 1);
	return (ptr);
}
