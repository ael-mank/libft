/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:01:35 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:57:46 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Searches for the first occurrence of the character 'searchedChar' in the
 * first 'size' bytes of the memory block pointed to by 'memblck'.
 *
 * memblck The memory block to search.
 * searchedChar The character to search for.
 * size The number of bytes to search.
 *
 * return A pointer to the first occurrence of 'searchedChar' in the memory
 * block, or NULL if 'searchedChar' was not found.
 */

#include "libft.h"

void	*ft_memchr(const void *memblck, int searchedChar, size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)memblck;
	while (i < size)
	{
		if (mem[i] == (char)searchedChar)
		{
			return (&mem[i]);
		}
		i++;
	}
	return (NULL);
}
