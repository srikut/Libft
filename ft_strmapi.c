/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:17:13 by srikuto           #+#    #+#             */
/*   Updated: 2024/12/03 22:10:39 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*resalt;

	resalt = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		resalt[i] = f(i, s[i]);
		i++;
	}
	resalt[i] = '\0';
	return (resalt);
}
