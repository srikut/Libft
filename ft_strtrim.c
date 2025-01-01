/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:35:26 by srikuto           #+#    #+#             */
/*   Updated: 2024/12/04 01:23:18 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
    size_t	len;

	len = 0;
	while (s[len])
		len++;
	return len;
}
int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return 1;
		set++;
	}
	return 0;
}
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start = 0;
	size_t	end;
	char	*trimmed;
	size_t	i;

    while (!s1 || !set)
        return NULL;
    end = ft_strlen(s1);
    while (s1[start] && ft_is_in_set(s1[start], set))
        start++;
    while (end > start && ft_is_in_set(s1[end - 1], set))
        end--;
    trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
    while (!trimmed)
        return NULL;
    i = 0;
    while (start < end)
    {
        trimmed[i] = s1[start];
        i++;
        start++;
    }
	trimmed[i] = '\0';
    return trimmed;
}
