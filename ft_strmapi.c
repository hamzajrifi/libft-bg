/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:55:39 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/16 19:11:18 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)s);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	while (len > i)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
