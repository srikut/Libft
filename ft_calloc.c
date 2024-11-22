/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:04:08 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/22 17:52:44 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t total_size;
	void *str = (void *)malloc(nmemb * size);

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