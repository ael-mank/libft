/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:48:20 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/14 15:48:46 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*bg;

	if ((big == NULL || little == NULL) && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	bg = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (bg);
	while (bg[i] != '\0' && i < len)
	{
		c = 0;
		while (bg[i + c] && little[c] && bg[i + c] == little[c]
			&& i + c < len)
			c++;
		if (c == n_len)
			return (bg + i);
		i++;
	}
	return (NULL);
}
