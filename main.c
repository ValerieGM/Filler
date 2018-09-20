/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:33:36 by vgongora          #+#    #+#             */
/*   Updated: 2018/08/15 11:20:10 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	t_filler	*lib;

	lib = ft_memalloc(sizeof(t_filler));
	read_player(lib);
	while (1)
	{
		read_map(lib);
		if (solve(lib) == 0)
			lib->end = 1;
		print(lib);
		lib->placey = 0;
		lib->placex = 0;
		if (lib->gameover == 1)
			break ;
	}
	return (0);
}
