/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 16:34:51 by ysakakib          #+#    #+#             */
/*   Updated: 2017/06/06 01:02:04 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// Mandatory parts

// ft_memset
// ft_bzero
// ft_memcpy
// ft_memccpy
// ft_memmove
// ft_memchr
// ft_memcmp
size_t ft_strlen(const char *s);

// ft_strdup
// ft_strcpy
// ft_strncpy
// ft_strcat
// ft_strncat
// ft_strlcat
// ft_strchr
// ft_strrchr
// ft_strstr
// ft_strnstr
// ft_strcmp
// ft_strncmp
// ft_atoi
int ft_isalpha(int c);
// ft_isdigit
// ft_isalnum
int ft_isascii(int c);
// ft_isprint
int ft_toupper(int c);
int ft_tolower(int c);

// Additional Parts
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void(*f)(char *));
void ft_striteri(char *s, void(*f)(unsigned int, char *));
char *ft_strmap(char const *s, char(*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);
char *ft_itoa(int n);
void ft_putchar(char c);
void ft_putstr(char const *s);
void ft_putendl(char const *s);
void ft_putnbr(int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);
