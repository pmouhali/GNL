/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:40:24 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/15 12:01:37 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	buf[1000][BUFFER_SIZE + 1];
	int ret;
	int i;

	if (!line || fd < 0 || read(fd, buf, 0) == -1)
		return (-1);
	i = ft_index(buf[fd], '\n');
	*line = ft_strnjoin(((void*)0), buf[fd], i);
	ft_memmove(buf[fd], &buf[fd][i + 1], BUFFER_SIZE - i);
	if (i != - 1)
		return (1);
	while ((ret = read(fd, buf[fd], BUFFER_SIZE)) != -1)
	{
		buf[fd][ret] = '\0';
		if (ret == 0)
			return (0);
		i = ft_index(buf[fd], '\n');
		*line = ft_strnjoin(*line, buf[fd], i);
		ft_memmove(buf[fd], &buf[fd][i + 1],
			(i == -1 ? 0 : BUFFER_SIZE - i));
		if (i != -1)
			return (1);
	}
	return (ret);
}

/*
** If BUFFER_SIZE == 0 this GNL code returns 0
*/
