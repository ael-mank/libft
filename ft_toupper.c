/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:33:52 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:27:14 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This function converts a lowercase letter to uppercase.
 *
 * This function takes an integer as input and checks
 * if it is a lowercase letter.
 * If it is a lowercase letter, it converts it to uppercase and
 * returns the result.
 * If it is not a lowercase letter, it returns the input integer as is.
 *
 * c The integer to be converted to uppercase.
 * return The uppercase version of the input integer if it is
 * a lowercase letter, otherwise the input integer.
 */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}
