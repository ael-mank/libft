/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:49:37 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks whether the given character is alphanumeric or not.
 *
 * c The character to be checked.
 * return : int Returns 1 if the character is alphanumeric, 0 otherwise.
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 48) && (c <= 57))
		|| ((c >= 65) && (c <= 90))
		|| ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
