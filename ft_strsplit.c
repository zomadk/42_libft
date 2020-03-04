/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:00:26 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 16:12:59 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		wordlen(char const *str, char b)
{
	int i;
	char *wd;

	i = 0;
	while (*str == b)
		str++;
	while (*str && *str != b)
	{
		str++;
		i++;
	}
	return (i);
}

int		wordcount(char const *str, char b)
{
	int c;

	while (*str == b)
		str++;
	while (*str)
	{
		if (*str != b)
			c++;
		while (*str != '\0' && *str != b)
			str++;
		while (*str == b)
			str++;
	}
	return (c);
}

char	**ft_strsplit(char const *s, char c)
{
	char **words;
	int i;
	int b;
	int wc;
	int j =0;
	i = 0;
	b = 0;
	wc = wordcount(s, c);
	if (!(words = (char **)malloc(sizeof(char *) * wc + 1)))
		return (NULL);
	while (i < wc)
	{
		if (!(words[b] = malloc(sizeof(char) * wordlen(s, c) + 1)))
			return (NULL);
		
		while (s[i] == c)
		{
			i++;
		}
		while (words[b])
		{
			words[b][i] = s;
			s++;
		}
		i++;
		b++;
	}
	words[b] = NULL;
	return (words);
}

int		main()
{
	char **str = ft_strsplit("*hello****my*friend****here**goobye*",'*');

	int i = 0;
	while (str[i])
	{
		printf("%s", str[i]);
		i++;
	}
	return 0;
}



