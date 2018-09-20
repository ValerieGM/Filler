/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:45:57 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/30 09:35:24 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	v;
	char	*str;

	v = 0;
	str = (char *)s;
	while (str[v] != c)
	{
		if (str[v] == '\0')
			return (NULL);
		v++;
	}
	return (str + v);
}
