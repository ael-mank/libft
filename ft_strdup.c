/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:59:31 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:09:35 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Returns a pointer to a new string which is a duplicate of the string source.
 *
 * The ft_strdup() function allocates sufficient memory for a copy of the string 
 * source does the copy, and returns a pointer to it.
 * The pointer may subsequently be used as an argument to the function free(3).
 *
 * source The string to duplicate.
 * return A pointer to the duplicated string or NULL if insufficient memory.
 */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * ((ft_strlen(source)) + 1));
	if (!dest)
		return (NULL);
	while (source[i])
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
