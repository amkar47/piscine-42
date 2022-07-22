/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:18:59 by namath            #+#    #+#             */
/*   Updated: 2022/07/22 15:35:44 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	while (nb > i * i)
			i++;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(36));
	return (0);
}
