/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:18:57 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/16 16:18:58 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t v;
	size_t dest_len;

	v = 0;
	dest_len = ft_strlen(dest);
	while (src[v] && v < n)
	{
		dest[dest_len] = src[v];
		dest_len++;
		v++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
