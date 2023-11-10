/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:50:38 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/10 11:45:07 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int character);
int		ft_isprint(int character);
int		ft_isascii(int c);
int		ft_strlen(char *str);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *first, const char *second, size_t length);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void	*ft_memset(void *ptr, int value, size_t size);
void	ft_bzero(void *ptr, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *memblck, int searchedChar, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcpy(char	*dest, char	*src, size_t destsize);
size_t	ft_strlcat(char *dest, char *src, size_t destsize);

#endif
