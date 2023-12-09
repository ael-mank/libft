/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 14:09:55 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
