/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabbythree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:33:46 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 22:02:19 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

char	*tabbythree(char *str)
{
	int		i;
	int		j;
	char	*tab;
	int		count;

	str = ft_shift_0(str);
	j = ft_strlen(str);
	j += ft_strlen(str) / 3;
	tab = malloc(sizeof(char) * (j + 1));
	if (tab == NULL)
		return (NULL);
	tab[j--] = '\0';
	count = 0;
	i = ft_strlen(str) - 1;
	while (j >= 0)
	{
		tab[j--] = str[i--];
		count++;
		if (count % 3 == 0)
			tab[j--] = ' ';
	}
	return (tab);
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

int	what_is_it(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

int	ft_fill_tab(int *k, char *str, char **dest)
{
	int	type;

	type = what_is_it(str);
	if (type == 0)
		ft_fill_typeo(k, str, dest);
	if (type == 1)
		ft_fill_type1(k, str, dest);
	if (type == 2)
		ft_fill_type2(k, str, dest);
	if (type == 3)
		ft_fill_type3(k, str, dest);
	return (type);
}

char	**ft_split_in_preword(char *str)
{
	int		i;
	int		*k;
	int		type;
	char	**dest;

	dest = ft_alloc_dest(str);
	if (!dest)
		return (NULL);
	i = 0;
	if (str[i] == ' ')
		i++;
	k = malloc(sizeof(int));
	*k = 0;
	while (str[i])
	{
		type = ft_fill_tab(k, &str[i], dest);
		if (type == 2 && str[i] == '1')
			i++;
		i++;
	}
	if (*k == 0)
		ft_put_a_0_str(dest, k);
	dest[*k] = NULL;
	ft_2free(str, k);
	return (dest);
}
