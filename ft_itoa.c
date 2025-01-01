/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:14:49 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/01 21:00:06 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>

static size_t int_len(long n)
{
	size_t lengs;

	if(n == 0)
		return(1);
	lengs = 0;
	if(n < 0)
	{
		n *= -1;
		lengs++;
	}
	while(n > 0)
	{
		n /= 10;
		lengs++;
	}
	return(lengs);
}
void int_to_str_re(long n, char *str, int *index, size_t flag)
{
    if (n < 0)
	{
		str[(*index)++] = '-';
        n = -n;
    }
	flag++;
    if (n / 10 > 0)
        int_to_str_re(n / 10, str, index, flag);
    str[(*index)++] = (n % 10) + '0';
	if(flag == 1)
    	str[*index] = '\0';
}

char *ft_itoa(int n)
{
    char *str = malloc(int_len(n) + 1);
    if (!str)
		return(NULL);
    int index = 0;
	if(n == 0)
	{
		str[index] = '0';
		index++;
		str[index] = '\0';
	}
	size_t flag = 0;
	if(n != 0)
    	int_to_str_re(n, str, &index, flag);
    return str;
}

// int main() {
//     int number = 2345;
//     char *result = ft_itoa(number);
//     if (result) {
//         printf("Result: %s\n", result);
//         free(result);
//     }
//     return 0;
// }

