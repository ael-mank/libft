/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 08:56:36 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 12:10:13 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Applies the function `f` to each character of the string `s` and 
 * passes its index as first argument.
 *
 * s The string to iterate over.
 * f The function to apply to each character of `s`.
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
