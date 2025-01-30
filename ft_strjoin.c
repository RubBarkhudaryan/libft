/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:41:43 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/28 21:04:53 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ind;
	int		s1len;
	int		s2len;
	char	*newstr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = (char *)malloc(s1len + s2len + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	ind = 0;
	while (i < s1len)
		newstr[ind++] = s1[i++];
	i = 0;
	while (i < s2len)
		newstr[ind++] = s2[i++];
	newstr[ind] = '\0';
	return (newstr);
}
