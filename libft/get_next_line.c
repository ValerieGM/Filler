/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:57:25 by vgongora          #+#    #+#             */
/*   Updated: 2018/08/15 11:54:11 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		newl(const int fd, char **line, char **str)
{
	char	*temp;
	size_t	len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len])
		len++;
	if (str[fd][len] == '\n')
	{
		*line = ft_strsub(str[fd], 0, len);
		temp = ft_strdup(str[fd] + len + 1);
		free(str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][len] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str[0];
	char		buff[BUFF_SIZE + 1];
	char		*temp;
	int			rd;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((rd = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[rd] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(0);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (rd < 0)
		return (-1);
	else if (rd == 0 && (str[fd] == NULL || str[fd] == '\0'))
		return (0);
	return (newl(fd, line, str));
}
