/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:10:29 by namath            #+#    #+#             */
/*   Updated: 2022/07/13 18:14:01 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0')
		{
			if (i < size -1)
			{
				dest[i] = src[i];
				j++;
			}
			i++;
		}
	}
	else
	{
		while (src[i++] != '\0')
				j++;
		return (i - 1);
	}
	dest[j] = '\0';
	return (i);
}
