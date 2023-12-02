/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:31:05 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:46:25 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_atoi() function converts the initial portion of the string pointed to
** by str to int representation.
**
** str: The string to be converted.
**
** Returns: The converted int value.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	signe;

	i = 0;
	nbr = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	return (signe * nbr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
//     char *input = argv[1];
//     int expected = atoi(input);
//     int actual = ft_atoi(input);

//     printf("Input: %s\n", input);
//     printf("Expected: %d\n", expected);
//     printf("Actual: %d\n", actual);
//     return 0;
// }