/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:33:22 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 21:53:32 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void				find_both(t_filler *lib)
{
	int v;
	int t;

	v = 0;
	while (v < lib->ymap)
	{
		t = 0;
		while (t < lib->xmap)
		{
			if (lib->map[v][t] == lib->user)
			{
				lib->user_posy = v;
				lib->user_posx = t;
			}
			if (lib->map[v][t] == lib->opponent)
			{
				lib->opp_posy = v;
				lib->opp_posx = t;
			}
			t++;
		}
		v++;
	}
}

static int			analyze_token(t_filler *lib, int v, int t)
{
	int x;
	int y;
	int pos;

	y = 0;
	pos = 0;
	while (y < lib->trimmedy)
	{
		x = 0;
		while (x < lib->trimmedx)
		{
			if ((lib->map[v + y][t + x] == lib->user ||
						lib->map[v + y][t + x] == lib->user + 32)
					&& lib->trim[y][x] == '*')
				pos++;
			if ((lib->map[v + y][t + x] == lib->opponent ||
						lib->map[v + y][t + x] == lib->opponent + 32)
					&& lib->trim[y][x] == '*')
				return (0);
			x++;
		}
		y++;
	}
	return ((pos == 1) ? 1 : 0);
}

int					attempt(t_filler *lib, int v, int t)
{
	if (v + lib->trimmedy > lib->ymap)
		return (0);
	else if (t + lib->trimmedx > lib->xmap)
		return (0);
	else
		return (analyze_token(lib, v, t));
}
