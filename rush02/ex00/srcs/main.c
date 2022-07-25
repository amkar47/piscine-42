/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <namath@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:33:57 by namath            #+#    #+#             */
/*   Updated: 2022/07/25 13:46:30 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_isa10pow(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size > 3)
		return (1);
	return (0);
}

int	ft_is_to_print(char **tabinstruct, int i)
{
	if (ft_isa10pow(tabinstruct[i]) && ft_isa10pow(tabinstruct[i + 1]))
		return (0);
	return (1);
}

int	ft_write_this_beauty(char *instruct, char *filename)
{
	char	*dict;
	char	**tabinstruct;
	int		i;

	dict = ft_dict_into_str(filename);
	tabinstruct = ft_split_in_preword(tabbythree(instruct));
	if (!tabinstruct || !dict)
		return (0);
	if (!ft_checkfindable(tabinstruct, dict))
		return (0);
	ft_putword_from_instruct(tabinstruct[0], dict);
	i = 1;
	while (tabinstruct[i])
	{
		if (tabinstruct[i][0] && ft_is_to_print(tabinstruct, i - 1))
		{
			ft_putstr(" ");
			ft_putword_from_instruct(tabinstruct[i], dict);
		}
		i++;
	}
	ft_putstr("\n");
	ft_free_all_this(tabinstruct, dict);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_str_is_numeric(av[1]))
		{
			if (!ft_write_this_beauty(av[1], "numbers.dict"))
				ft_putstr("Dict error\n");
		}
		else
			ft_puterror();
		return (0);
	}
	if (ac == 3)
	{
		if (ft_str_is_numeric(av[2]))
		{
			if (!ft_write_this_beauty(av[2], av[1]))
				ft_putstr("Dict error\n");
		}
		else
			ft_puterror();
		return (0);
	}
	ft_puterror();
	return (0);
}
