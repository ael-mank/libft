/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:02:56 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills the first size bytes of the memory area pointed to by ptr with
 * the constant byte value.
 * 
 * ptr Pointer to the memory area to be filled.
 * value The value to be set. The value is passed as an int, but the function
 * fills the memory using the unsigned char conversion of this value.
 * size Number of bytes to be set to the value.
 * return void* A pointer to the memory area ptr.
 */

void	*ft_memset(void *ptr, int value, size_t size)
{
	size_t	i;
	char	*ptrchar;

	i = 0;
	ptrchar = (char *)ptr;
	while (i < size)
	{
		ptrchar[i] = value;
		i++;
	}
	return (ptr);
}
