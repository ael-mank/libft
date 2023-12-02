/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:21:37 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:00:46 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Allocates memory for an array of `count` elements of `size` bytes
 * each and returns a pointer to the allocated memory.
 * The memory is set to zero using `ft_bzero`.
 *
 * count : The number of elements to allocate memory for.
 * size : The size of each element in bytes.
 * return value : A pointer to the allocated memory, 
 * or NULL if the allocation fails.
 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, size * count);
	return (res);
}
