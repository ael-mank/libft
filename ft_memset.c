/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 11:39:04 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	size_t	i;
	unsigned char	*ptrchar;

	i = 0;
	ptrchar = (unsigned char *)ptr;
	while (i < size)
	{
		ptrchar[i] = value;
		i++;
	}
	return (ptr);
}
