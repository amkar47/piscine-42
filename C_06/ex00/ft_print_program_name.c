/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:28:32 by namath            #+#    #+#             */
/*   Updated: 2022/07/22 10:14:54 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != "\0")
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}


int	main(int argc, char *argv[])
{
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);	
}
