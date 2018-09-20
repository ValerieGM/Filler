/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:45:35 by vgongora          #+#    #+#             */
/*   Updated: 2018/08/16 11:53:45 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void		ytrim(t_filler *lib)
{
	int v;

	v = 0;
	while (v < lib->ytoken)
	{
		if (ft_strchr(lib->token[v], '*'))
			break ;
		v++;
	}
	lib->firsty = v;
}

static void		trim(t_filler *lib)
{
	int t;
	int v;

	t = 0;
	v = 0;
	ytrim(lib);
	while (v < lib->ytoken)
	{
		if (lib->token[v][t] == '*')
			break ;
		v++;
		if (lib->token[v] == NULL)
		{
			t++;
			v = lib->firsty;
		}
	}
	v = 0;
	v = lib->ytoken - 1;
	while (!ft_strchr(lib->token[v], '*'))
		v--;
	lib->lasty = v;
	lib->firstx = t;
	lib->trimmedy = v - lib->firsty + 1;
	lib->trimmedx = lib->xtoken - lib->firstx;
}

void			trim_token(t_filler *lib)
{
	int v;
	int t;

	trim(lib);
	v = 0;
	t = lib->firsty;
	lib->trim = (char **)malloc(sizeof(char *) * (lib->trimmedy + 1));
	while (v < lib->trimmedy)
	{
		lib->trim[v++] = ft_strsub(lib->token[t], lib->firstx, lib->trimmedx);
		t++;
	}
	lib->trim[v] = NULL;
}
