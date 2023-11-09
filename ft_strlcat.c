/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:41:11 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 12:23:23 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	b;

	i = 0;
	j = 0;
	b = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (destsize <= i)
		j += destsize;
	else
		j += i;
	while (src[b] && i < (destsize - 1) && destsize != 0)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (j);
}
