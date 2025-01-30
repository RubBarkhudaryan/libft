/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:28:48 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/30 16:57:30 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	if (*str == '\0')
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(str);
	while (ft_strchr(set, str[i]) && i < len)
		++i;
	while (ft_strchr(set, str[len]) && len >= 0)
		--len;
	return (ft_substr(str, i, len - i + 1));
}
