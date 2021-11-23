/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:59:29 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/16 22:45:11 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		res;
	long	k;

	k = n;
	if (k < 0)
	{
		k = -k;
		write(fd, "-", 1);
	}
	if (k > 9)
	{
		ft_putnbr_fd((k / 10), fd);
		ft_putnbr_fd((k % 10), fd);
	}
	else
	{
		res = k + 48;
		ft_putchar_fd(res, fd);
	}
}
