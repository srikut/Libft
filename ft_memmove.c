/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:02:05 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/22 17:53:35 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char s[n];
	unsigned char *sr = (unsigned char *)src;
	unsigned char *de = (unsigned char *)dest;

	i = 0;
	while (i < n)
	{
		s[i] = sr[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		de[i] = s[i];
		i++;
	}
	return (dest);
}