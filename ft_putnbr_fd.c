/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:30:00 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/30 20:41:53 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	return (1);
}

int	ft_degree(int n)
{
	int	deg;

	deg = 1;
	while (n / deg >= 10)
		deg *= 10;
	return (deg);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		degree;
	char	decimal;

	if (checker(n, fd))
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		degree = ft_degree(n);
		while (degree)
		{
			decimal = (n / degree) + '0';
			n %= degree;
			degree /= 10;
			ft_putchar_fd(decimal, fd);
		}
	}
}
