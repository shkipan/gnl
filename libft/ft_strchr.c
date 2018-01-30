/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:45:39 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/30 19:06:11 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	sym;
	size_t	i;

	i = 0;
	sym = (char)c;
	while (*(s + i))
	{
		if (*(s + i) == sym)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
