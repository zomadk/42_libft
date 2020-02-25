/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:35:07 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 23:25:22 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(const char *str);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strncpy(char *dst, char *src, size_t len);
char	*ft_strcpy(char *dst, char *src);
int		ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_lower(int c);
int		ft_isascii(int c);


#endif
