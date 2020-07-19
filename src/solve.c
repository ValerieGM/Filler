/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:01:41 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 21:50:14 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int		topleft(t_filler *lib)
{
	int v;
	int t;

	v = 0;
	while (v <= lib->ymap)
	{
		t = 0;
		while (t <= lib->xmap)
		{
			if (attempt(lib, v, t) == 1)
			{
				lib->placey = v - lib->firsty;
				lib->placex = t - lib->firstx;
				return (1);
			}
			t++;
		}
		v++;
	}
	return (0);
}

static int		bottright(t_filler *lib)
{
	int v;
	int t;

	v = lib->ymap;
	while (v >= 0)
	{
		t = lib->xmap;
		while (t >= 0)
		{
			if (attempt(lib, v, t) == 1)
			{
				lib->placey = v - lib->firsty;
				lib->placex = t - lib->firstx;
				return (1);
			}
			t--;
		}
		v--;
	}
	return (0);
}

int				solve(t_filler *lib)
{
	static int v;

	v = 0;
	if (v == 0)
	{
		v = 1;
		return (topleft(lib));
	}
	else
	{
		v = 0;
		return (bottright(lib));
	}
}
