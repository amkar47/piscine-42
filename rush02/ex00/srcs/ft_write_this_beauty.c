/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_this_beauty.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:33:52 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 22:02:04 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

int	ft_char_is_from_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && c != base[i])
		i++;
	if (base[i])
		return (1);
	return (0);
}

char	*ft_key_to_value(char *str, char *dict)
{
	char	*lign;

	lign = ft_checkstr(dict, str);
	while (*lign != ':')
		lign++;
	while (ft_char_is_from_base(*lign, " :"))
		lign++;
	return (lign);
}

void	ft_putword_from_instruct(char *instruct, char *dict)
{
	ft_putstr_n(ft_key_to_value(instruct, dict));
}
