/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:04:19 by namath            #+#    #+#             */
/*   Updated: 2022/07/27 07:04:17 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i++;
	}
	return ((void *)0);
}
