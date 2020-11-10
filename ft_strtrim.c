/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:16:28 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/26 19:23:46 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *ft_memalloc(size_t size)
{
	char *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

static char *ft_strnew(size_t size)
{
	char *ptr;

	ptr = ft_memalloc(sizeof(char) * size + 1);
	return (ptr);
}

static int ft_is_char(char s, char const *set)
{
	char const *ptr;

	ptr = set;
	while (*ptr)
	{
		if (*ptr == s)
			return (1);
		ptr++;
	}
	ptr = set;
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	char *ptr;
	const char *end;

	if (s1 == NULL)
		return (NULL);
	while (*s1 && ft_is_char(*s1, set))
		s1++;
	if (!*s1)
		return (ft_strnew(0));
	end = (ft_strlen(s1) + s1 - 1);
	while (ft_is_char(*end, set))
		end--;
	str = ft_strnew((end - s1) + 1);
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (s1 <= end)
	{
		*str = (char)*s1;
		str++;
		s1++;
	}
	return (ptr);
}
