/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:03:14 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:26:20 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Returns a substring of the given string 's', starting from the index 'start'
 * and having a length of 'len'.
 * 
 * s The string to extract the substring from.
 * start The starting index of the substring.
 * len The length of the substring.
 * If memory allocation fails, returns NULL.
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (i < (long unsigned int)ft_strlen(s) && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
