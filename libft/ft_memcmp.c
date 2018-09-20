/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:44:53 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/29 09:49:07 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	v;
	char	*str1;
	char	*str2;

	v = 0;
	str1 = (char*)s1;
	str2 = (char*)s2;
	while (v < n)
	{
		if (str1[v] != str2[v])
			return ((unsigned char)str1[v] - (unsigned char)str2[v]);
		v++;
	}
	return (0);
}
