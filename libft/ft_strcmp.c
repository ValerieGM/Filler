/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:47:00 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/29 11:19:57 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int v;

	v = 0;
	while (s1[v] || s2[v])
	{
		if (s1[v] != s2[v])
			return ((unsigned char)s1[v] - (unsigned char)s2[v]);
		v++;
	}
	return (0);
}
