/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:51:46 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/10 11:08:30 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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
