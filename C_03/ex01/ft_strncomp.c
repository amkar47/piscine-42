/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncomp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:55:01 by namath            #+#    #+#             */
/*   Updated: 2022/07/18 10:30:22 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while(1 < n - 1  && s1[i] && s2[i])
	{
		i++;
		while(s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		{
			i++;
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
