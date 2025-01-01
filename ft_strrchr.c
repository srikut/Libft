/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:15:34 by srikuto           #+#    #+#             */
/*   Updated: 2024/12/31 19:49:35 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *s_original = s;

	s = s + ft_strlen(s);
	while (s >= s_original)
	{
		 if (*s == (char)c)
            return (char *)s;
        s--;   
	}
	return(NULL);
}
// int main(void)
// {
// 	char *s = "i am a student!";
// 	char c = 'a';

// 	printf("%p\n", ft_strrchr(s, c));
// 	printf("%p\n", strrchr(s, c));
// 	return(0);
// }
