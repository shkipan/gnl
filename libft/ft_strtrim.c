/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:50:21 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/25 19:24:01 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*res;
	int		i;

	if (s == NULL)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*(s + i))
	{
		*(res + i) = *(s + i);
		i++;
	}
	i--;
	while (*(res + i) == ' ' || *(res + i) == '\t' || *(res + i) == '\n')
		i--;
	res = ft_str_cut(res, (i + 1));
	return (res);
}
