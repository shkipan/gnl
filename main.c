/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 19:05:22 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/30 19:52:52 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;

	fd = (argc == 1) ? 1 : open(argv[1], O_RDONLY);
	line = (char *)malloc(sizeof(char) * (2 * BUFF_SIZE + 1));
	i = 1;
	while (get_next_line(fd, &line))
	{
	printf("%d %s\n|||||||||||||||||||\n", i, line);
	free(line);
	i++;
	}
	return (0);
}
