/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:47:10 by bpoumeau          #+#    #+#             */
/*   Updated: 2022/07/24 21:38:22 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

void	ft_2free(char *str, int *stra)
{
	free(str);
	free(stra);
}

char	**ft_alloc_dest(char *str)
{
	int		size;
	char	**dest;

	size = ft_nbrofnb(str);
	dest = malloc(sizeof(char *) * size * 2 + 1);
	return (dest);
}

void	ft_free_all_this(char **tabinstruct, char *str)
{
	free (str);
	ft_free_tab(tabinstruct);
}

void	ft_free_tab(char **tabinstruct)
{
	int	i;

	i = 0;
	while (tabinstruct[i] != NULL)
		free(tabinstruct[i++]);
	free(tabinstruct);
}

char	*ft_shift_0(char *str)
{
	while (*str == '0' && *(str + 1))
		str++;
	return (str);
}
