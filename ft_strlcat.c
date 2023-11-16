/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:41:11 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:13:32 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Appends the NUL-terminated string src to the end of dst.
 * It will append at most dstsize - strlen(dst) - 1 characters. 
 * It will then NUL-terminate, unless dstsize is
 * 0 or the original dst string was longer than dstsize 
 * (in practice this should not happen as it means that either dstsize 
 * is incorrect or that dst is not a proper string).
 *
 * dst The destination string.
 * src The source string.
 * dstsize The size of the destination buffer.
 *
 * return The total length of the string it tried to create.
 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	if (((dst == NULL || src == NULL)) && !dstsize)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
