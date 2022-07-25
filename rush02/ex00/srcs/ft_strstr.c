/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:27:03 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 20:19:25 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	sztofind;
	int	szfound;

	i = 0;
	szfound = 0;
	sztofind = 0;
	while (to_find[sztofind])
		sztofind++;
	if (sztofind == 0)
		return (str);
	while (str[i + szfound] && szfound != sztofind)
	{
		if (str[i + szfound] == to_find[szfound])
			szfound++;
		else
		{
			szfound = 0;
			i++;
		}
		if (to_find[szfound] == '\0')
			return (&str[i]);
	}
	return ((void *) 0);
}

int	ft_is_false(char *str, int size)
{
	if (*(str - 1) != '\n')
		return (1);
	if (*(str + size) <= '9' && *(str + size) >= '0')
		return (1);
	return (0);
}

char	*ft_checkstr(char *str, char *to_find)
{
	char	*dest;
	int		size;

	size = ft_strlen(to_find);
	dest = ft_strstr(str, to_find);
	if (ft_is_false(dest, size))
		return (ft_checkstr (&dest[1], to_find));
	return (dest);
}
