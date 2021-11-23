/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:13:18 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/20 00:53:37 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_copy(char *p1, char const *s1, int i, int j)
{
	int	k;

	k = 0;
	while (i <= j && s1[i])
	{
		p1[k] = s1[i];
		k++;
		i++;
	}
	p1[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p1;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j && s1[j] && ft_strrchr(set, s1[j]))
		j--;
	k = j - i;
	if (i >= j)
		k = 0;
	p1 = (char *)malloc (sizeof(char) * (k + 2));
	if (!p1)
		return (NULL);
	ft_copy(p1, s1, i, j);
	return (p1);
}
