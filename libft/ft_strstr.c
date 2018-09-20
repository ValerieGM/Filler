/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:20:15 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/30 09:35:05 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t t;
	size_t v;

	t = 0;
	if (!needle[0])
		return ((char*)haystack);
	while (haystack[t])
	{
		v = 0;
		while (haystack[t + v] == needle[v] && haystack[t + v] && needle[v])
			v++;
		if (!needle[v])
			return ((char *)haystack + t);
		t++;
	}
	return (NULL);
}
