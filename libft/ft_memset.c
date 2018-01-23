/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:34:18 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/09 12:57:50 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	sym;
	size_t			i;

	i = 0;
	str = b;
	sym = (unsigned char)c;
	while (i < len)
	{
		*(str + i) = sym;
		i++;
	}
	return (b);
}
