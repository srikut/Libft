/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:14:49 by srikuto           #+#    #+#             */
/*   Updated: 2024/12/31 20:42:04 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void int_to_str_re(int n, char *str, int *index)
{
    if (n < 0)
	{
		str[(*index)++] = '-';
        n = -n;
    }
    if (n / 10 > 0)
        int_to_str_re(n / 10, str, index);
    str[(*index)++] = (n % 10) + '0';
    str[*index] = '\0';
}

char *ft_itoa(int n)
{
    char *str = malloc(12);
    if (!str)
		free(str);
    int index = 0;
    int_to_str_re(n, str, &index);
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

