/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:38:18 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_flags	*create_struct(void)
{
	t_flags	*elem;

	elem = malloc(sizeof(t_flags));
	if (!elem)
		return (NULL);
	return (elem);
}

int	ft_checktype(va_list args, const char type, t_flags *flags)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int), flags));
	else if (type == 's')
		return (ft_printstr_flag(va_arg(args, char *), flags));
	else if (type == 'p')
		return (ft_printptr(va_arg(args, unsigned long long), flags));
	else if ((type == 'd') || (type == 'i'))
		return (ft_putnbr(va_arg(args, int), flags));
	else if (type == 'x')
		return (ft_printhexa(va_arg(args, unsigned int), 'x', flags));
	else if (type == 'X')
		return (ft_printhexa(va_arg(args, unsigned int), 'X', flags));
	else if (type == 'u')
		return (ft_printunsigned(va_arg(args, unsigned int), flags));
	else if (type == '%')
		return (ft_printchar('%'));
	return (1);
}
