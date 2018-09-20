/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:18:44 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/30 09:37:47 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		v;
	char	*str;
	size_t	size;

	v = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	str = ft_strnew(size);
	if (!str)
		return (NULL);
	while (s[v])
	{
		str[v] = f(v, s[v]);
		v++;
	}
	str[v] = '\0';
	return (str);
}
