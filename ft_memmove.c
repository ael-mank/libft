/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:51:38 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 14:56:12 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d == NULL || s == NULL)
		return (0);
	if (d > s)
		while (size-- > 0)
			d[size] = s[size];
	else
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
