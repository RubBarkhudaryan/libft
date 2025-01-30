/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:30:01 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/27 15:40:30 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buff, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) buff;
	while (len--)
	{
		ptr[len] = (unsigned char) c;
	}
	return (buff);
}
