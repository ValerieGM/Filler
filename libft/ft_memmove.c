/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:45:20 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/30 09:33:38 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*s;
	int		len;

	s = (char *)src;
	dst = (char *)dest;
	len = (int)n;
	if (s < dst)
	{
		while (--len >= 0)
		{
			dst[len] = s[len];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
