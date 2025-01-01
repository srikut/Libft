/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:04:08 by srikuto           #+#    #+#             */
/*   Updated: 2024/12/31 19:55:02 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size && (count > SIZE_MAX / size))
		return (NULL);
	ret = malloc(count * size);
	if(!ret)
		free(ret);
	if (ret)
		ft_bzero(ret, count * size);
	return (ret);
}
