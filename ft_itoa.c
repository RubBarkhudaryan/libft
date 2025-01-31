/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:17:09 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/31 19:14:54 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits_count(long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		++count;
	while (n)
	{
		n /= 10;
		++count;
	}
	return (count);
}

static int	ft_degree(long n)
{
	int	deg;

	deg = 1;
	while (n / deg >= 10)
		deg *= 10;
	return (deg);
}

char	*ft_itoa(int n)
{
	int		degree;
	char	*str;
	int		i;
	long	num;

	i = 0;
	num = n;
	str = (char *)malloc(digits_count(num) + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[i++] = '-';
		num *= -1;
	}
	degree = ft_degree(num);
	while (degree)
	{
		str[i++] = (num / degree) + '0';
		num %= degree;
		degree /= 10;
	}
	str[i] = '\0';
	return (str);
}
