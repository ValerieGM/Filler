/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:19:21 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/29 13:00:29 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t v;

	v = 0;
	while (v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
