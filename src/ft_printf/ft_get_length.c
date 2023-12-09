/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:39:42 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_integer_length(int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_get_hexadecimal_length(unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr == 0)
		i = 1;
	while (nbr > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int	ft_int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
		nbr = -nbr;
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
