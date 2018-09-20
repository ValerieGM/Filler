/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:53:16 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/29 11:09:58 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	v;
	int		t;
	int		dest_len;

	dest_len = ft_strlen(dest);
	v = 0;
	t = dest_len;
	if (dest_len > (int)size)
		dest_len = (int)size;
	dest_len = dest_len + ft_strlen(src);
	while ((src[v]) && ((t) < (int)size - 1))
	{
		dest[t] = src[v];
		v++;
		t++;
	}
	dest[t] = '\0';
	return (dest_len);
}
