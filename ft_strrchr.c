/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:26:48 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/28 16:18:00 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	pos;

	i = 0;
	pos = -1;
	while (str[i])
	{
		if ((unsigned char)c == str[i])
			pos = i;
		++i;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(str + i));
	if (pos == -1)
		return (NULL);
	return ((char *)(str + pos));
}
