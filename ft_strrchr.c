/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:15:34 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 22:41:02 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_original;

	s_original = s;
	s = s + ft_strlen(s);
	while (s >= s_original)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s = "i am a student!";
// 	char c = 'a';

// 	printf("%p\n", ft_strrchr(s, c));
// 	printf("%p\n", strrchr(s, c));
// 	return(0);
// }
