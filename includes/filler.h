/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:01:47 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 21:55:38 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "./libft/includes/libft.h"
# include <stdio.h>

typedef struct	s_filler
{
	char		**map;
	int			xmap;
	int			ymap;

	char		**token;
	int			xtoken;
	int			ytoken;

	int			firstx;
	int			lastx;
	int			firsty;
	int			lasty;

	char		**trim;
	int			trimmedy;
	int			trimmedx;

	char		opponent;
	int			opp_posx;
	int			opp_posy;

	char		user;
	int			user_posx;
	int			user_posy;

	int			placex;
	int			placey;

	int			end;
	int			solve;
	int			gameover;
}				t_filler;

void			tdim(t_filler *lib, char *line);
void			mdim(t_filler *lib);
void			trim_token(t_filler *lib);

void			read_player(t_filler *lib);
int				read_map(t_filler *lib);
int				read_token(t_filler *lib, char *line);

void			find_both(t_filler *lib);
int				attempt(t_filler *lib, int v, int t);
int				solve(t_filler *lib);

void			print(t_filler *lib);

#endif
