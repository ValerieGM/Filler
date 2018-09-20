/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:45:48 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/17 10:52:36 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t dest_len;
	size_t v;

	v = 0;
	dest_len = ft_strlen(dest);
	while (src[v])
	{
		dest[dest_len] = src[v];
		v++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
