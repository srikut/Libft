/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:42:16 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 23:32:42 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sign(int nb, int fd)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(fd, "-", 1);
		return (nb);
	}
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c;
	int		num[100];

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	n = sign(n, fd);
	i = 0;
	while (n >= 10)
	{
		num[i] = n % 10;
		i++;
		n = n / 10;
	}
	num[i] = n % 10;
	while (i >= 0)
	{
		c = num[i] + '0';
		write(fd, &c, 1);
		i--;
	}
}
