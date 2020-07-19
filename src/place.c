/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:27:08 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 21:50:14 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

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
