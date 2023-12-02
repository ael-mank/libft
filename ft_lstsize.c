/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:33:48 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:57:12 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Counts the number of elements in a linked list.
 *
 * lst The beginning of the linked list.
 * return The number of elements in the linked list.
 */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
