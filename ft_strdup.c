/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:28:37 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/28 18:29:38 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	int		i;
	char	*temp;

	len = ft_strlen(src);
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (src[i])
	{
		temp[i] = src[i];
		++i;
	}
	temp[i] = '\0';
	return (temp);
}
