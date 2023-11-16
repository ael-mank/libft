/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:48:20 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:19:42 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Searches for the first occurrence of 'little' in the string 'big', 
 * where not more than 'len' characters are searched. 
 * If 'little' is an empty string, 'big' is returned. 
 * If 'little' occurs nowhere in 'big', NULL is returned. 
 * 
 * big The string to search in.
 * little The substring to search for.
 * len The maximum number of characters to search.
 * return A pointer to the first occurrence of the substring 
 * 'little' in the string 'big', or NULL if the substring is not found.
 */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*bg;

	if ((big == NULL || little == NULL) && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	bg = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (bg);
	while (bg[i] != '\0' && i < len)
	{
		c = 0;
		while (bg[i + c] && little[c] && bg[i + c] == little[c]
			&& i + c < len)
			c++;
		if (c == n_len)
			return (bg + i);
		i++;
	}
	return (NULL);
}
