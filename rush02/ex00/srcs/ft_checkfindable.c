/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfindable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:28:44 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 20:18:46 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

int	ft_checkfindable(char **tabinstruct, char *dict)
{
	int	i;

	i = 0;
	while (tabinstruct[i])
	{
		if (!ft_strstr(dict, tabinstruct[i]))
			return (0);
		i++;
	}
	return (1);
}
