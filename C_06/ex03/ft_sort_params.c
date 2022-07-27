/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <namath@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:43:45 by namath            #+#    #+#             */
/*   Updated: 2022/07/27 07:18:05 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}

int	ft_swap(char **s1, char **s2)
{
	int	temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int size, char **argv)
{
	int	i;
	int	k;

	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (argv[k])
		{
			if (ft_strcmp (argv[i], argv[k]) > 0)
				ft_swap (&argv[i], &argv[k]);
			k++;
		}
		i++;
	}
}

int	main(void argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	i = 1;
	ft_sort_params (argc - 1, &argv[1]);
	while (i < argc)
	{
		ft_putstr (argv[i]);
		ft_putstr ("\n");
		i++;
	}
	return (0);
}
