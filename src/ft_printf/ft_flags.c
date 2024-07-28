/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:39:30 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isflag(const char c)
{
	if (c == '-' || c == '+' || c == '0' || c == ' ' || c == '+' || c == '#')
		return (1);
	else
		return (0);
}

int	ft_setflags(t_flags *flags, const char *str)
{
	int	i;

	i = 0;
	while (ft_isflag(str[i]))
	{
		if (str[i] == '-')
			flags->minus = 1;
		else if (str[i] == '+')
			flags->plus = 1;
		else if (str[i] == ' ')
			flags->space = 1;
		else if (str[i] == '#')
			flags->hash = 1;
		else if (str[i] == '0')
			flags->zero = 1;
		i++;
	}
	return (i);
}

int	ft_getwidth(t_flags *flags, const char *str, va_list args)
{
	int	i;

	i = 0;
	if (str[i] == '*')
	{
		flags->width = va_arg(args, int);
		if (flags->width < 0)
		{
			flags->width = -flags->width;
			flags->minus = 1;
			flags->zero = 0;
		}
		return (1);
	}
	while (ft_isdigit(str[i]))
	{
		flags->width = flags->width * 10 + (str[i] - '0');
		i++;
	}
	return (i);
}

int	ft_getprecision(t_flags *flags, const char *str, va_list args)
{
	int	i;

	i = 0;
	if (str[i] == '.')
	{
		flags->precision = 1;
		i++;
		if (str[i] == '*')
		{
			flags->precisize = va_arg(args, int);
			if (flags->precisize < 0)
				flags->precision = 0;
			return (2);
		}
		while (ft_isdigit(str[i]))
		{
			flags->precisize = flags->precisize * 10 + (str[i] - '0');
			i++;
		}
	}
	return (i);
}

int	ft_re_setflags(t_flags *flags, const char *str, va_list args)
{
	int	len;

	ft_bzero(flags, sizeof(t_flags));
	len = ft_setflags(flags, str);
	len += ft_getwidth(flags, &str[len], args);
	len += ft_getprecision(flags, &str[len], args);
	return (len);
}
