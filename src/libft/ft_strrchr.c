/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:39:29 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/09 15:36:55 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			last = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		last = (char *)str;
	}
	return (last);
}
