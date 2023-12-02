/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:39:29 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:21:17 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Returns a pointer to the last occurrence of the character 'c'
 * in the string 'str'.
 * 
 * The ft_strrchr() function returns a pointer to the last occurrence 
 * of the character 'c' in the string 'str'.
 * The terminating null byte is considered part of the string
 * therefore if 'c' is '\0', the function returns a pointer to 
 * the null byte at the end of 'str'.
 *
 * str The string to be searched.
 * c The character to be located.
 * return A pointer to the last occurrence of 'c' in 'str'
 * or NULL if the character is not found.
 */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			last = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		last = (char *)str;
	}
	return (last);
}
