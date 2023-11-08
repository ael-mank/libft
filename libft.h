/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:50:38 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/08 11:10:39 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int character);
int		ft_isprint(int character);
int		ft_isascii(int c);
int		ft_strlen(char *str);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *ptr, int value, size_t size);
void	fr_bzero(void *ptr, size_t n);
char	*strchr(const char *str, int c);
char	*strrchr(const char *str, int c);
int		ft_strncmp(const char *first, const char *second, size_t length);

#endif
