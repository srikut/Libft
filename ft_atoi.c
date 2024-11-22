/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:23:43 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/22 17:51:16 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	output;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	output = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		output = (output * 10) + (*nptr - '0');
		nptr++;
	}
	output *= sign;
	return (output);
}
// int main(void)
// {
// 	char str1[] = "  -123abc";
//     char str2[] = "42";
//     char str3[] = "Hello123";

//     printf("str1 = %d\n", atoi(str1)); // -123
// 	printf("str1 = %d\n", ft_atoi(str1));
//     printf("str2 = %d\n", atoi(str2)); // 42
// 	printf("str2 = %d\n", ft_atoi(str2));
//     printf("str3 = %d\n", atoi(str3)); // 0
// 	printf("str3 = %d\n", ft_atoi(str3));

//     return (0);
// }