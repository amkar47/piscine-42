/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_in_preword.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:01:10 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 20:19:27 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

char	**ft_split_in_preword(char *str)
{
	int		i;
	int		*k;
	int		size;
	int		type;
	char	**dest;

	size = ft_nbrofnb(str);
	dest = malloc(sizeof(char *) * (size * 2 + 1));
	i = 0;
	if (str[i] == ' ')
		i++;
	k = malloc(sizeof(int));
	*k = 0;
	while (str[i])
	{
		type = what_is_it(&str[i]);
		ft_fill_tab(type, k, str, dest, i);
		if (type == 2 && str[i] == '1')
			i++;
		i++;
	}
	dest[*k] = NULL;
	free(str);
	return (dest);
}

int	ft_nbrofnb(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			count++;
		i++;
	}
	return (count);
}
