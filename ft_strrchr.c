/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:51:01 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/20 15:36:56 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tab;
	int		lens;

	tab = (char *)s;
	lens = ft_strlen(tab);
	i = 0;
	while (i <= lens)
	{
		if (s[lens] == (char )c)
			return (&tab[lens]);
		lens--;
	}
	return (NULL);
}	
