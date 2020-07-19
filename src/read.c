/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:01:32 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 21:50:14 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	tdim(t_filler *lib, char *line)
{
	lib->ytoken = ft_atoi(&line[6]);
	lib->xtoken = ft_atoi(&line[8]);
}

void	mdim(t_filler *lib)
{
	char *line;

	if (get_next_line(0, &line) < 0)
		return ;
	lib->ymap = ft_atoi(&line[8]);
	lib->xmap = ft_atoi(&line[11]);
}

void	read_player(t_filler *lib)
{
	char *line;

	get_next_line(0, &line);
	if (ft_atoi(&line[10]) == 1)
		lib->user = 'O';
	else
		lib->user = 'X';
	if (lib->user == 'O')
		lib->opponent = 'X';
	else
		lib->opponent = 'O';
}

int		read_token(t_filler *lib, char *line)
{
	int v;

	v = 0;
	tdim(lib, line);
	if (!lib->token)
		if (!(lib->token = (char **)malloc(sizeof(char *) * (lib->ytoken + 1))))
			return (-1);
	while (v < lib->ytoken)
	{
		get_next_line(0, &line);
		lib->token[v] = ft_strdup(line);
		v++;
	}
	lib->token[v] = NULL;
	trim_token(lib);
	return (0);
}

int		read_map(t_filler *lib)
{
	int		v;
	char	*line;

	v = 0;
	mdim(lib);
	if (!lib->map)
		if (!(lib->map = (char **)malloc(sizeof(char *) * (lib->ymap + 1))))
			return (-1);
	get_next_line(0, &line);
	while (v <= lib->ymap)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			lib->map[v] = ft_strdup(&line[4]);
		else
			read_token(lib, line);
		v++;
	}
	lib->map[v] = NULL;
	if (lib->opp_posx == 0 && lib->opp_posy == 0 &&
			lib->user_posx == 0 && lib->user_posy == 0)
		find_both(lib);
	return (0);
}
