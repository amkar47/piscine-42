/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namath <namath@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:55:01 by namath            #+#    #+#             */
/*   Updated: 2022/07/27 12:02:05 by namath           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char    s1[30] = "abcdeghiz";
    char    s2[30] = "abcdeghia";
    printf("%d", ft_strncmp(s1, s2, 3));
    printf("\n%d", strncmp(s1, s2, 3));
    return(0);
}