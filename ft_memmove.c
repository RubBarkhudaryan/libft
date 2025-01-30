/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:31:45 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/27 19:16:05 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d == s || len == 0)
		return (dest);
	if (d < s)
		ft_memcpy(dest, src, len);
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			--i;
		}
	}
	return (dest);
}
