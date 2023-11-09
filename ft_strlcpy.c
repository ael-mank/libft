/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:00:48 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 10:40:28 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, char	*src, size_t destsize)
{
	size_t	i;
	size_t	srcsize;

	if (!src || !dest)
		return (0);
	i = 0;
	srcsize = ft_strlen(src);
	if (destsize != 0)
	{
		while ((src[i] != '\0') && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}
