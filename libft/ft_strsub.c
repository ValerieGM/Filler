/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:20:23 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/30 09:38:03 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	v;

	str = (char*)malloc(sizeof(char) * len + 1);
	v = 0;
	if (!s)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (v < len)
	{
		str[v] = s[start + v];
		v++;
	}
	str[v] = '\0';
	return (str);
}
