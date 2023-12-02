/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:49:05 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:50:55 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks whether a given character is an alphabetic character.
 *
 * c The character to check.
 * return 1 if the character is an alphabetic character, 0 otherwise.
 */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	res;

	res = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		res += 1;
	return (res);
}
