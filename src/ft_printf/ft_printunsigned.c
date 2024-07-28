/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:59:07 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getunsignedlen(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i = 1;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int nbr, t_flags *flags)
{
	char	*array;
	int		i;
	int		len;

	len = ft_getunsignedlen(nbr);
	if (flags->precisize > len)
		len = flags->precisize;
	array = (char *)malloc(sizeof(char) * len + 1);
	if (!array)
		return (0);
	array[len] = '\0';
	i = len - 1;
	while (nbr > 0)
	{
		array[i] = "0123456789"[nbr % 10];
		nbr /= 10;
		i--;
	}
	while (i >= 0)
	{
		array[i] = '0';
		i--;
	}
	return (array);
}

int	ft_unsignedflags(char *str, t_flags *flags)
{
	int	ret;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = 0;
	if (flags->minus == 1)
		write(1, str, len);
	while (i++ < (flags->width - len))
	{
		if (flags->zero == 1 && flags->precision == 1)
			ret += write(1, " ", 1);
		else if (flags->zero == 1 && flags->precision == 0 && flags->minus == 0)
			ret += write(1, "0", 1);
		else
			ret += write(1, " ", 1);
	}
	if (flags->minus == 0)
		write(1, str, len);
	return (ret + len);
}

int	ft_unsignedflags_zero(char *str, t_flags *flags)
{
	int	ret;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = 0;
	if (flags->minus == 1)
		write(1, 0, 0);
	while (i++ <= (flags->width - len))
	{
		if (flags->zero == 1 && flags->precision == 1)
			ret += write(1, " ", 1);
		else if (flags->zero == 1 && flags->precision == 0 && flags->minus == 0)
			ret += write(1, "0", 1);
		else
			ret += write(1, " ", 1);
	}
	if (flags->minus == 0)
		write(1, 0, 0);
	return (ret);
}

int	ft_printunsigned(unsigned int nbr, t_flags *flags)
{
	int		count;
	char	*str;

	str = ft_utoa(nbr, flags);
	if (flags->precision == 1 && flags->precisize == 0 && nbr == 0)
		count = ft_unsignedflags_zero(str, flags);
	else
		count = ft_unsignedflags(str, flags);
	free(str);
	return (count);
}
