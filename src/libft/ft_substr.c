/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:03:14 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 07:39:41 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
