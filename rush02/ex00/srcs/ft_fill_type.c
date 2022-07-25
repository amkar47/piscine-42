/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:56:10 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 20:24:43 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

void	ft_fill_typeo(int *k, char *str, char **dest)
{
	int	size;
	int	j;

	j = 1;
	size = ft_nbrofnb(str);
	dest[*k] = malloc(sizeof(char) * (size + 2));
	dest[*k][0] = '1';
	while (j < size + 1)
		dest[*k][j++] = '0';
	dest[*k][size + 1] = '\0';
	*k = *k + 1;
}

void	ft_fill_type1(int *k, char *str, char **tab)
{
	if (*str == '0')
		return ;
	tab[*k] = malloc(2);
	tab[*k][0] = *str;
	tab[*k][1] = '\0';
	*k = *k + 1;
}

void	ft_fill_type2(int *k, char *str, char **tab)
{
	if (*str != '0')
	{
		if (*str == '1')
		{
			tab[*k] = malloc(3);
			tab[*k][0] = *str;
			tab[*k][1] = str[1];
			tab[*k][2] = '\0';
			*k = *k + 1;
		}
		else
		{
			tab[*k] = malloc(3);
			tab[*k][0] = *str;
			tab[*k][1] = '0';
			tab[*k][2] = '\0';
			*k = *k + 1;
		}
	}
}

void	ft_fill_type3(int *k, char *str, char **tab)
{
	if (*str != '0')
	{
		tab[*k] = malloc(2);
		tab[*k][0] = *str;
		tab[*k][1] = '\0';
		*k = *k + 1;
		tab[*k] = malloc(4);
		tab[*k][0] = '1';
		tab[*k][1] = '0';
		tab[*k][2] = '0';
		tab[*k][3] = '\0';
		*k = *k + 1;
	}
}
