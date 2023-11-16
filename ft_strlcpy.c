/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:00:48 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:14:41 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copies a string from src to dest, up to a maximum of destsize - 1 characters.
 * The resulting string in dest is always null-terminated.
 *
 * dest The destination buffer to copy the string to.
 * src The source string to copy from.
 * destsize The maximum number of characters to copy to dest,
 * including the null-terminator.
 *
 * return The length of the source string.
 */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t destsize)
{
	size_t	i;
	size_t	srcsize;

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
