/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_justifyptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:58:24 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptr_flag(char sign)
{
	if (sign == ' ')
		return (ft_printchar(' '));
	else if (sign == '+')
		return (ft_printchar('+'));
	return (0);
}

void	print_width_flags_ptr(char *str, t_flags *flags, int len)
{
	if (flags->plus == 1)
		ft_ptr_flag('+');
	else if (flags->plus == 0 && flags->space == 1)
		ft_ptr_flag(' ');
	write(1, "0x", 2);
	write(1, str, len);
}

int	set_v_ptr(t_flags *flags)
{
	int	ret;

	ret = 0;
	if (flags->plus == 1)
		ret += 1;
	else if (flags->plus == 0 && flags->space == 1)
		ret += 1;
	return (ret + 2);
}

int	justify_putflags_zero_ptr(char *str, t_flags *flags)
{
	int	ret;
	int	len;
	int	v;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = 0;
	v = set_v_ptr(flags);
	if (flags->plus == 1)
		ft_ptr_flag('+');
	else if (flags->plus == 0 && flags->space == 1)
		ft_ptr_flag(' ');
	write(1, "0x", 2);
	while (i++ < (flags->width - (len + v)))
		ret += write(1, "0", 1);
	if (str[0] == 0)
		len++;
	write(1, str, len);
	return (ret + len + v);
}

int	justify_putflags_ptr(char *str, t_flags *flags)
{
	int	ret;
	int	len;
	int	v;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = 0;
	v = set_v_ptr(flags);
	if (flags->minus == 1)
		print_width_flags_ptr(str, flags, len);
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
		print_width_flags_ptr(str, flags, len);
	return (ret + len + v);
}
