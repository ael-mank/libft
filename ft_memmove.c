/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:51:38 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:02:38 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copies a block of memory from a source address to a destination address, 
 * handling overlapping regions of memory.
 *
 * dest Pointer to the destination array where the content is to be copied.
 * src Pointer to the source of data to be copied.
 * size Number of bytes to copy.
 * return Pointer to the destination array.
 */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (0);
	if (d > s)
		while (size-- > 0)
			d[size] = s[size];
	else
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
