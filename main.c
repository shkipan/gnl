/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 19:05:22 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/23 19:41:51 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	fd = (argc == 1) ? 1 : open(argv[1], O_RDONLY);
	line = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	while (get_next_line(fd, &line))
		printf("%s\n", line);
	return (0);
}
