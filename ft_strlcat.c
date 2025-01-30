/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:13:38 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/27 19:59:12 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	buf_size;
	size_t	src_size;

	i = 0;
	buf_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size <= buf_size)
		return (dest_size + src_size);
	while (src[i] && i < (dest_size - buf_size - 1))
	{
		dest[buf_size + i] = src[i];
		++i;
	}
	dest[buf_size + i] = '\0';
	return (buf_size + src_size);
}
