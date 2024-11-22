/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:48:44 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/22 17:52:28 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	signed char	*str;

	str = (signed char *)s;
	while (n-- > 0)
	{
		*str = 0;
		str++;
	}
}
// int	main(void)
// {
// 	char buffer[10];

// 	ft_bzero(buffer, sizeof(buffer)); // bufferの全要素を0で埋める

// 	// 結果の表示
// 	for (int i = 0; i < sizeof(buffer); i++)
// 	{
// 		printf("%d ", buffer[i]); // 各要素が0であることを確認
// 	}
// 	printf("\n");

// 	return (0);
// }