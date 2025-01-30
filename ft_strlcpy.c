/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:59:49 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/27 17:11:46 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size > 0)
	{
		while (i < (dest_size - 1) && src[i])
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	while (src[i])
		++i;
	return (i);
}
