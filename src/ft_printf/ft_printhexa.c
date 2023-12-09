/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:58:45 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 18:41:49 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	add_zero_hexa(int len, int i, char *array)
{
	while (i < len)
	{
		array[i] = '0';
		i++;
	}
}

void	reversing_array(char *array, int len)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = len - 1;
	while (start < len / 2)
	{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
}

char	*ft_puthexa(unsigned int nbr, char c, t_flags *flags)
{
	int		len;
	char	*array;
	int		i;

	i = 0;
	len = ft_get_hexadecimal_length(nbr);
	if (flags->precisize > len)
		len += (flags->precisize - len);
	array = malloc(sizeof(char) * (len + 1));
	array[len] = '\0';
	if (nbr == 0)
		array[len - 1] = '0';
	while (nbr > 0)
	{
		array[i] = "0123456789abcdef"[nbr % 16];
		nbr /= 16;
		i++;
	}
	if (flags->precisize > 0)
		add_zero_hexa(len, i, array);
	if (c == 'X')
		ft_str_toupper(array);
	reversing_array(array, len);
	return (array);
}

int	ft_printhexa(unsigned int nbr, char c, t_flags *flags)
{
	char	*array;
	int		ret;

	ret = 0;
	array = ft_puthexa(nbr, c, flags);
	if (flags->precision == 1 && nbr == 0 && flags->precisize == 0)
		ret = ft_hexaflag_zero(array, flags);
	else if (flags->minus == 1)
		ret = ft_hexaflag_left(array, flags, c, nbr);
	else if (flags->zero == 1 && flags->precision == 0)
		ret = ft_hexaflag_right_zero(array, flags, c, nbr);
	else if (flags->zero == 1 && flags->precision == 1)
		ret = ft_hexaflag_right(array, flags, c, nbr);
	else
		ret = ft_hexaflag_right(array, flags, c, nbr);
	free(array);
	return (ret);
}
