/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:01:41 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 17:56:51 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!destsize)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (destsize <= dest_len)
		return (destsize + src_len);
	ft_strlcpy(dest + dest_len, src, destsize - dest_len);
	return (dest_len + src_len);
}
// int main(void)
// {
// 	char *dest = "hello";
// 	char *src = "world";

// 	printf("%zu\n", ft_strlen(dest));
// 	printf("%zu\n", strlcat(dest, src, 0));
// 	printf("%zu\n", ft_strlcat(dest, src, 0));
// 	return(0);
// }