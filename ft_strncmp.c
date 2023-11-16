/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:51:46 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:18:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares the first 'length' characters of two strings 'first' and 'second'.
** Returns an integer greater than, equal to, or less than 0,
** depending on whether 'first' is greater than, equal to, or less than 'second'.
**
** first The first string to compare.
** second The second string to compare.
** length The maximum number of characters to compare.
** return An integer greater than, equal to, or less than 0, depending on whether
** 'first' is greater than, equal to, or less than 'second', respectively.
*/

#include "libft.h"

int	ft_strncmp( const char *first, const char *second, size_t length )
{
	size_t	i;

	i = 0;
	if (length == 0)
		return (0);
	while ((i < length - 1) && (first[i] == second[i]) && first[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
