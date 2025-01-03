/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:04:08 by srikuto           #+#    #+#             */
/*   Updated: 2025/01/03 22:46:27 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size && (count > __SIZE_MAX__ / size))
		return (NULL);
	ret = malloc(count * size);
	if (!ret)
		free(ret);
	if (ret)
		ft_bzero(ret, count * size);
	return (ret);
}
