/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:27:53 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/12 08:29:48 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wrdcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

char	*wrdtocell(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	*ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

void	set_vars(size_t *i, size_t *y, int *wordfind)
{
	*i = 0;
	*y = 0;
	*wordfind = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wordfind;
	size_t	i;
	size_t	y;

	set_vars(&i, &y, &wordfind);
	res = ft_calloc((wrdcount(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && wordfind < 0)
			wordfind = i;
		else if ((s[i] == c || i == ft_strlen(s)) && wordfind >= 0)
		{
			res[y] = wrdtocell(s, wordfind, i);
			if (!(res[y]))
				return (ft_free(res, y));
			wordfind = -1;
			y++;
		}
		i++;
	}
	return (res);
}
