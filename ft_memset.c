/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:27:38 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 22:39:24 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (s);
}
/*
int	main(void)
{
	char buffer1[20];
	char buffer2[20];
	int fill_char = 'A';
	size_t n = 10;

	// 標準の memset を使って初期化
	memset(buffer1, fill_char, n);
	buffer1[n] = '\0';  // 文字列として表示するために終端文字を追加

	// ft_memset を使って初期化
	ft_memset(buffer2, fill_char, n);
	buffer2[n] = '\0';  // 文字列として表示するために終端文字を追加

	// 結果を表示
	printf("Standard memset: %s\n", buffer1);
	printf("Custom ft_memset: %s\n", buffer2);

	// 比較
	if (memcmp(buffer1, buffer2, n) == 0)
		printf("Test passed: Both are equal.\n");
	else
		printf("Test failed: Outputs differ.\n");

	return (0);
} */