/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:59:14 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c, t_flags *flags)
{
	int	len;
	int	ret;
	int	i;

	i = 0;
	len = 1;
	ret = len;
	if (flags->precision == 1 && flags->precisize < len)
	{
		len = flags->precisize;
		ret = len;
	}
	if (flags->minus == 1)
		write(1, &c, len);
	while (i++ < flags->width - len)
		ret += write(1, " ", 1);
	if (flags->minus == 0)
		write(1, &c, len);
	return (ret);
}

int	ft_printnullstr(t_flags *flags)
{
	int	i;

	i = 0;
	if (flags->precision == 1 && flags->precisize < 6)
	{
		while (flags->width-- > 0)
			i += write(1, " ", 1);
		return (i);
	}
	else
	{
		if (flags->minus == 1)
			write(1, "(null)", 6);
		while (i++ < flags->width - 6)
			write(1, " ", 1);
		if (flags->minus == 0)
			write(1, "(null)", 6);
	}
	return (6 + i - 1);
}

int	ft_printnull_char_str(t_flags *flags)
{
	int	i;

	i = 0;
	if (flags->width > 0)
	{
		while (flags->width-- > 0)
			i += write(1, " ", 1);
		return (i);
	}
	else
		return (0);
}

int	ft_printstr_flag(char *str, t_flags *flags)
{
	int	len;
	int	ret;
	int	i;

	i = 0;
	if (!str)
		return (ft_printnullstr(flags));
	if (!*str)
		return (ft_printnull_char_str(flags));
	len = ft_strlen(str);
	ret = len;
	if (flags->precision == 1 && flags->precisize < len)
	{
		len = flags->precisize;
		ret = len;
	}
	if (flags->minus == 1)
		write(1, str, len);
	while (i++ < flags->width - len)
		ret += write(1, " ", 1);
	if (flags->minus == 0)
		write(1, str, len);
	return (ret);
}
