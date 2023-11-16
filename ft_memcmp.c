/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:19:32 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:59:56 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Compares the first 'size' bytes of memory areas 'ptr1' and 'ptr2'.
 *
 * ptr1 - pointer to the first memory area to be compared.
 * ptr2 - pointer to the second memory area to be compared.
 * size - number of bytes to be compared.
 *
 * return an integer less than, equal to, or greater than zero 
 * if the first 'size' bytes of 'ptr1' are found,
 * respectively, to be less than, to match, or be greater than 
 * the first 'size' bytes of 'ptr2'.
 * If 'size' is zero, the function returns zero.
 */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t				i;
	unsigned const char	*p1;
	unsigned const char	*p2;

	p1 = (unsigned const char *)ptr1;
	p2 = (unsigned const char *)ptr2;
	if (p1 == NULL && p2 == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
