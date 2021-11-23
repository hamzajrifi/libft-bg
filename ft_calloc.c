/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:38:41 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/06 12:07:58 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*src;

	src = (void *)malloc(size * count);
	if (!src)
		return (0);
	ft_bzero(src, size * count);
	return (src);
}
