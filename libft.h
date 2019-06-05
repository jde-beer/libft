/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:28:56 by jde-beer          #+#    #+#             */
/*   Updated: 2019/06/05 16:00:13 by jde-beer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_swap(int *a, int *b);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_striter(char *s, void (*f)(char *));
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_memalloc(size_t size);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *src, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char *s1, const char *s2, size_t size);
size_t	ft_strlen(char *str);
char	*ft_strncat(char *s1, const char *s2, unsigned int n);
char	*ft_strncpy(char *dst, const char *src, size_t k);
void	ft_swap(int *a, int *b);
char	*ft_strstr(const char *haystack, const char *needle);

#endif
