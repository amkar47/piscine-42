/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <namath@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:55:51 by namath            #+#    #+#             */
/*   Updated: 2022/07/27 11:15:27 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (1);
	tab = malloc(sizeof(char) * (ft_range() + 1));
	if (tab == NULL)
		return (NULL);
	while (tab[i] != *tab)
	{
		
		i++;
	}
}
