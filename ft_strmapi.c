/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:17:13 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 22:20:56 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*resalt;

	if (s == NULL || f == NULL)
		return (NULL);
	resalt = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!resalt)
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
