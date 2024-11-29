/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:14:49 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/29 13:47:12 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

size_t int_len(int n)
{
	size_t i;

	i = 0;
	if(n < 0)
	{
		n *= -1;
		i++;
	}
	while(n > 0)
	{
		n /= 10;
		i++;
	}
	return(i);
}
char *re_num(char *num, int n)
{
	
}
char *ft_itoa(int n)
{
	size_t i;

	char *num = (char *)malloc(sizeof(char) * int_len(n) + 1);	
	if(num)
		return(NULL);
	i = 0;
	return(re(n, i, num));
}
int main(void)
{
	int num;
	num = -672;
	printf("%s", ft_itoa(num));
	return(0);
}