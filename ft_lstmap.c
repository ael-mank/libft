/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:23:53 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:59:15 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Applies the function f to each element of the list and creates 
 * a new list with the results.
 * This function iterates the linked list 'lst' and applies the function 'f' 
 * to the content of each element.
 * It creates a new list with the results of the 'f' function and returns it.
 * If the allocation of a new element fails, the function frees the memory 
 * of the new list and returns NULL.
 *
 * lst The pointer to the first element of the list.
 * f The function to apply to the content of each element.
 * del The function to delete the content of an element.
 * return The new list with the results of the 'f' function or 
 * NULL if the allocation of a new element fails.
 */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newobj;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newobj = ft_lstnew(f(lst->content));
		if (!newobj)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newobj);
		lst = lst->next;
	}
	return (newlst);
}
