/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:58:53 by ael-mank          #+#    #+#             */
/*   Updated: 2023/12/09 17:57:21 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n, t_flags *flag)
{
	int	ret;

	ret = integer_handler(n, flag);
	return (ret);
}
