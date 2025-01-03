/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:02:05 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 21:58:11 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*de;
	unsigned const char	*sr;

	if (dest == NULL && src == NULL)
		return (NULL);
	de = dest;
	sr = src;
	if (dest < src)
	{
		while (n-- > 0)
			*de++ = *sr++;
	}
	else
	{
		de = de + n -1;
		sr = sr + n -1;
		while (n-- > 0)
			*de-- = *sr--;
	}
	return (dest);
}
