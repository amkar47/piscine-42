/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:57:19 by namath            #+#    #+#             */
/*   Updated: 2022/07/20 18:18:26 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' || str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 48 && str[i - 1] <= 57)
				|| (str[i - 1] >= 65 && str[i - 1] <= 90)
				|| (str[i - 1] >= 97 && str[i - 1] <= 122)))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return ("lol");
}

#include <stdio.h>

int	main()
{
	char	phrase[30]= "salut Je SUCE mon CaillOu";
	ft_strcapitalize(phrase);
	printf("%s", phrase);
	return (0);
}
