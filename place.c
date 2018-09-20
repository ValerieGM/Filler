/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:27:08 by vgongora          #+#    #+#             */
/*   Updated: 2018/08/15 11:21:17 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		print(t_filler *lib)
{
	if (lib->end == 1)
	{
		lib->gameover = 1;
		ft_putnbr(lib->placey);
		ft_putchar(' ');
		ft_putnbr(lib->placex);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(lib->placey);
		ft_putchar(' ');
		ft_putnbr(lib->placex);
		ft_putchar('\n');
	}
}
