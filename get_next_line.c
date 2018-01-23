/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:24:37 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/23 19:41:48 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*stack = NULL;
	char		*buf;
	int			ret;

	if (line == NULL || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret - 1] = '\0';
	stack = NULL;
	ft_strcpy(*line, buf);
	return (1);
}
