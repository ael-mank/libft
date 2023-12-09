/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:57:50 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	justify_putflags_precisize(t_flags *flags, int n)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	if (n < 0)
		ft_integer_flag('-');
	if (n >= 0 && flags->plus == 1)
		ft_integer_flag('+');
	else if (n >= 0 && flags->plus == 0 && flags->space == 1)
		ft_integer_flag(' ');
	while (i++ < flags->width)
		ret += write(1, " ", 1);
	write(1, 0, 0);
	return (ret);
}

int	integer_handler(int n, t_flags *flags)
{
	int		len;
	int		ret;
	char	*str;

	ret = 0;
	len = ft_int_len(n);
	str = ft_itoa_ptf(n, flags, len);
	if (n == 0)
		ret += justify_putflags_zero2(str, flags);
	else if (flags->precision == 1 && n != 0)
		ret += justify_putflags_integer(str, flags, n);
	else if (flags->precision == 0 && flags->zero == 1)
		ret += justify_putflags_zero(str, flags, n);
	else if (flags->precision == 0)
		ret += justify_putflags_integer(str, flags, n);
	free(str);
	return (ret);
}

/**
 * 	else if (n == 0 && flags->precision == 1 && flags->precisize == 0)
		ret += justify_putflags_precisize(flags, n);
	else if (n == 0 && flags->precisize > 0)
		ret += justify_putflags_zero(str, flags, n);
*/