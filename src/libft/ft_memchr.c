/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:01:35 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/14 15:34:44 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
