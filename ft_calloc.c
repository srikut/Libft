/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:04:08 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/27 10:06:24 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t total_size;
	void *str = (void *)malloc(nmemb * size);

	total_size = nmemb * size;
	if (!str && total_size / nmemb != size)
		return (NULL);
	i = nmemb * size;
	char *charstr = (char *)str;
	while (i > 0)
	{
		*charstr = 0;
		charstr++;
		i--;
	}
	return (str);
}