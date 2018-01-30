/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:24:37 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/30 19:52:55 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*stack = NULL;
	char		*buf;
	char		*res;
	char		*x;
	int			ret;

	if (line == NULL || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	if (stack == NULL)
	{
		stack = ft_strdup("");
		res = ft_strdup("");
	}
	else
		res = ft_strdup(stack);
	buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	while ((ret = read(fd, buf, BUFF_SIZE)) != 0)
	{
		buf[ret] = '\0';
		x = ft_strdup(res);
		free(res);
		res = ft_strjoin(x, buf);
		if (ft_strchr(buf, '\n') != NULL)
			break ;
	}
	stack = ft_strchr(res, '\n') + 1;
	ft_strncpy(*line, res, ft_strlen(res) - ft_strlen(stack) - 1);
	return (1);
}
