/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilibft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:59:19 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 18:45:11 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;
	char	*ptrchar;

	i = 0;
	ptrchar = (char *)ptr;
	while (i < n)
	{
		ptrchar[i] = 0;
		i++;
	}
}

void	ft_str_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

int	ft_isdigit(int character)
{
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
