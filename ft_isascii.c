/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:49:07 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:59:42 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks whether the given integer represents an ASCII character.
 *
 * c The integer to check.
 * return int Returns 1 if the integer represents an ASCII character
 * 0 otherwise.
 */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
