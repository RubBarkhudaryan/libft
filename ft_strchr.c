/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:58:18 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/28 15:24:53 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ((unsigned char)c == str[pos])
			return ((char *)(str + pos));
		++pos;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(str + pos));
	return (NULL);
}
