/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_into_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoumeau <bpoumeau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:33:17 by namath            #+#    #+#             */
/*   Updated: 2022/07/24 21:26:00 by bpoumeau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

int	ft_dict_len(char *str)
{
	int		fd;
	char	*buffer;
	int		dict_ln;

	buffer = malloc(1);
	dict_ln = 1;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (read(fd, buffer, 1))
		dict_ln++;
	close(fd);
	free(buffer);
	return (dict_ln);
}

char	*ft_dict_into_str(char *str)
{
	int		fd;
	char	*buffer;
	char	*dest;
	int		i;
	int		size;

	size = ft_dict_len(str);
	if (size == -1)
		return (NULL);
	i = 1;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	dest[0] = '\n';
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = malloc(1);
	while (read(fd, buffer, 1))
		dest[i++] = *buffer;
	free(buffer);
	return (dest);
}
