/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:35:07 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 20:01:09 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlen(const char *s);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strdup(const char *s1);
void	ft_bzero(void *b, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

size_t	ft_nbrlen(int n);

#endif
