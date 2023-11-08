/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:51:46 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/08 10:00:48 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp( const char *first, const char *second, size_t length )
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		if (first[i] != second[i] || first[i] == '\0' || second[i] == '\0')
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
