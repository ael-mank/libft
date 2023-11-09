/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:19:32 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 15:31:58 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t	i;
	char	*p1;
	char	*p2;

	p1 = (char *)ptr1;
	p2 = (char *)ptr2;
	if (p1 == NULL || p2 == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		if (p1[i] != p2[i])
		{
			return (p2[i] - p1[i]);
		}
		i++;
	}
	return (0);
}
