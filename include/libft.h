/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:50:38 by ael-mank          #+#    #+#             */
/*   Updated: 2024/01/19 12:38:30 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Mandatory functions from libft

int		ft_isalpha(int c);
int		ft_isdigit(int character);
int		ft_isprint(int character);
int		ft_isascii(int c);
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
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *memblck, int searchedChar, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *source);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char	*dest, const char	*src, size_t destsize);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);

//Bonus functions from libft

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_lstsize(t_list *lst);

//ft_Printf

typedef struct s_flags
{
	int	zero;
	int	minus;
	int	width;
	int	precision;
	int	precisize;
	int	hash;
	int	space;
	int	plus;
}		t_flags;

int		ft_printf(const char *str, ...);
int		ft_putchar(char c, t_flags *flags);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnullstr(t_flags *flags);
int		ft_printstr_flag(char *str, t_flags *flags);
int		ft_printptr(unsigned long long ptr, t_flags *flag);
int		ft_checktype(va_list args, const char type, t_flags *flags);
char	*malloc_zero(int len, int precisize);
int		ft_putnbr_before_flag(int n, t_flags *flag);
int		ft_putnbr(int n, t_flags *flag);
int		ft_get_hexadecimal_length(unsigned int nbr);
char	*create_array(int len, t_flags *flags);
char	*ft_puthexa(unsigned int nbr, char c, t_flags *flags);
int		ft_printhexa(unsigned int nbr, char c, t_flags *flags);
t_flags	*create_struct(void);
int		ft_setflags(t_flags *flags, const char *str);
int		ft_setflags(t_flags *flags, const char *str);
int		ft_get_integer_length(int nbr);
int		ft_printunsigned(unsigned int nbr, t_flags *flags);
int		ft_re_setflags(t_flags *flags, const char *str, va_list args);
int		ft_isdigit(int character);
void	add_zero_hexa(int len, int i, char *array);
int		set_v(int n, t_flags *flags);
int		ft_integer_flag(char sign);
int		ft_int_len(long nbr);
void	add_zero(char *str, int precisize, int len);
char	*ft_itoa_ptf(int n, t_flags *flag, int len);
int		integer_handler(int n, t_flags *flags);
int		justify_putflags_integer(char *str, t_flags *flags, int n);
void	print_width_flags(char *str, t_flags *flags, int n, int len);
int		justify_putflags_zero(char *str, t_flags *flags, int n);
int		justify_putflags_precisize(t_flags *flags, int n);
void	reversing_array(char *array, int len);
int		ft_hexaflag_left(char *str, t_flags *flags, char c, unsigned int nb);
int		ft_hexaflag_right_zero(char *str, t_flags *flags, char c,
			unsigned int nb);
int		ft_hexaflag_right(char *str, t_flags *flags, char c, unsigned int nb);
int		ft_hexaflag_zero(char *str, t_flags *flags);
int		justify_putflags_zero_ptr(char *str, t_flags *flags);
int		set_v_ptr(t_flags *flags);
void	print_width_flags_ptr(char *str, t_flags *flags, int len);
int		justify_putflags_ptr(char *str, t_flags *flags);
int		justify_putflags_precisize_ptr(t_flags *flags);
int		justify_putflags_zero2(char *str, t_flags *flags);
int		ft_getprecision(t_flags *flags, const char *str, va_list args);
int		ft_printnull_char_str(t_flags *flags);
void	ft_str_toupper(char *str);

//Get_next_line

char	*get_next_line(int fd);

#endif
