/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:40:04 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 22:30:13 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}

// int main(void)
// {
// 	char *dest;
// 	const void *src = NULL;
// 	size_t n = 10;
// 	dest = malloc(2);
// 	dest[0] = 'a';
// 	// printf("%s\n",(char *)memcpy(dest,src, n));
// 	printf("%s\n",(char *)ft_memcpy(dest,src, n));
// 	return(0);
// }