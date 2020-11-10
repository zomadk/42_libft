/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 19:25:48 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/26 19:22:30 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *ft_memalloc(size_t size)
{
	char *mem;

	if (!(mem = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

size_t ft_wordcount(char const *str, char b)
{
	size_t count;

	count = 0;
	while (*str)
	{
		if (*str != b)
		{
			if (*(str + 1) == b || *(str + 1) == '\0')
				count++;
		}
		str++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	unsigned int i;
	char **ptr;
	char *final;

	if (!s ||
		(!(ptr = (char **)ft_memalloc(sizeof(char *) * (ft_wordcount(s, c) + 1)))))
		return (NULL);
	i = -1;
	while (*s)
	{
		while ((*s == c) && *s)
			++s;
		if (*s)
		{
			if (!(final = ft_strchr(s, c)))
				ptr[++i] = ft_substr(s, 0, ft_strlen(s));
			else
				ptr[++i] = ft_substr(s, 0, final - s);
		}
		while ((*s != c) && *s)
			s++;
	}
	return (ptr);
}
