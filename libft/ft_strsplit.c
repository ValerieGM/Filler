/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 09:20:38 by vgongora          #+#    #+#             */
/*   Updated: 2018/05/30 17:52:03 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			word_count(char const *s, char c)
{
	unsigned int	v;
	int				wrd_cnt;

	v = 0;
	wrd_cnt = 0;
	while (s[v])
	{
		while (s[v] == c)
			v++;
		if (s[v] != '\0')
			wrd_cnt++;
		while (s[v] && s[v] != c)
			v++;
	}
	return (wrd_cnt);
}

char				**ft_strsplit(char const *s, char c)
{
	int		t;
	int		u;
	int		v;
	char	**str;

	t = 0;
	v = 0;
	if (!s || !(str = (char**)malloc(sizeof(char*) * (word_count(s, c)) + 1)))
		return (NULL);
	while (s[v])
	{
		while (s[v] == c)
			v++;
		u = v;
		while (s[v] && s[v] != c)
			v++;
		if (v > u)
		{
			str[t] = ft_strndup(s + u, v - u);
			t++;
		}
	}
	str[t] = NULL;
	return (str);
}
