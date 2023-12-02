/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:49:10 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:52:06 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks whether a character is printable.
 *
 * character The character to check.
 * return 1 if the character is printable, 0 otherwise.
 */

#include "libft.h"

int	ft_isprint(int character)
{
	if (character > 31 && character < 127)
		return (1);
	return (0);
}
