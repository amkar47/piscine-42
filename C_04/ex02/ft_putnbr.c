/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:36:12 by namath            #+#    #+#             */
/*   Updated: 2022/07/19 10:04:14 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	_ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	nb *= -1;
	}
	if (nb != 0)
	{
		_ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else if (-2147483648 == nb)
		write(1, "-2147483648", 11);
	else
		_ft_putnbr(nb);
}
