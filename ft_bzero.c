/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:03:32 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/16 11:47:01 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Sets the first n bytes of the memory area pointed to by ptr to zero.
 *
 * ptr - pointer to the memory area to be zeroed
 * n - number of bytes to be zeroed
 * 
 * THE TEST TAKES A NUMBER AS PARAMETER
 */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;
	char	*ptrchar;

	i = 0;
	ptrchar = (char *)ptr;
	while (i < n)
	{
		ptrchar[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "libft.h"

// int main(int argc, char **argv)
// {
//     char *input = argv[1];
//     int size = atoi(input);
//     char *buffer = malloc(size);
//     memset(buffer, 'a', size);
//     printf("Before bzero: %s\n", buffer);
//     ft_bzero(buffer, size);
//     printf("After bzero: %s\n", buffer);
//     free(buffer);
//     return 0;
// }