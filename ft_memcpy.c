/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:51:36 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/27 18:25:57 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	i = 0;
	ds = (unsigned char *) dest;
	sr = (unsigned char *) src;
	if (!ds && !sr)
		return (NULL);
	while (i < len)
	{
		ds[i] = (unsigned char)sr[i];
		++i;
	}
	return (dest);
}
