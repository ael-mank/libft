/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_justify_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:58:11 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	add_zero_flag(t_flags *flags, char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	if (flags->plus == 1)
	{
		ft_integer_flag('+');
		i = 1;
	}
	else if (flags->plus == 0 && flags->space == 1)
	{
		ft_integer_flag(' ');
		i = 1;
	}
	if (flags->precision == 1 && flags->precisize == 0)
	{
		write(1, 0, 0);
		return (0);
	}
	write(1, str, len);
	return (i);
}

int	need(t_flags *flags, int len, int v, int i)
{
	int	ret;

	ret = 0;
	while (i++ < (flags->width - (len + v)))
	{
		if (flags->zero == 1 && flags->precision == 0 && flags->minus == 0)
			ret += write(1, "0", 1);
		else
			ret += write(1, " ", 1);
	}
	return (ret);
}

int	justify_putflags_zero2(char *str, t_flags *flags)
{
	int	ret;
	int	len;
	int	i;
	int	v;

	v = 0;
	i = 0;
	if (flags->plus == 1 || flags->space == 1)
		v = 1;
	if (flags->precision == 1 && flags->precisize == 0)
		i = -1;
	len = ft_strlen(str);
	ret = 0;
	if (flags->minus == 1)
		add_zero_flag(flags, str);
	ret = need(flags, len, v, i);
	if (flags->minus == 0)
		add_zero_flag(flags, str);
	if (flags->precision == 1 && flags->precisize == 0)
		v--;
	return (ret + len + v);
}

int	justify_putflags_zero(char *str, t_flags *flags, int n)
{
	int	ret;
	int	len;
	int	v;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = 0;
	v = set_v(n, flags);
	if (n < 0)
		ft_integer_flag('-');
	if (n >= 0 && flags->plus == 1)
		ft_integer_flag('+');
	else if (n >= 0 && flags->plus == 0 && flags->space == 1)
		ft_integer_flag(' ');
	while (i++ < (flags->width - (len + v)))
		ret += write(1, "0", 1);
	if (str[0] == 0)
		len++;
	write(1, str, len);
	return (ret + len + v);
}

int	justify_putflags_integer(char *str, t_flags *flags, int n)
{
	int	ret;
	int	len;
	int	v;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = 0;
	v = set_v(n, flags);
	if (flags->minus == 1)
		print_width_flags(str, flags, n, len);
	while (i++ < (flags->width - (len + v)))
	{
		if (flags->zero == 1 && flags->precision == 1)
			ret += write(1, " ", 1);
		else if (flags->zero == 1 && flags->precision == 0)
			ret += write(1, "0", 1);
		else
			ret += write(1, " ", 1);
	}
	if (flags->minus == 0)
		print_width_flags(str, flags, n, len);
	return (ret + len + v);
}
