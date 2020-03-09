/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:00:26 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/06 15:18:10 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define OUT 0
#define IN 1
int		wordlen(char const *str, char b)
{
	int i;
	
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

	c = 0;
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
	int f;
	int k = 0;

	i = 0;
	b = 0;
	int wc = wordcount(s, c);
	if (!(words = (char **)malloc(sizeof(char *) * wc  + 1)))
		return (NULL);
	while (k < wc)
	{
		if (!(words[k] = (char *)malloc(sizeof(char) * (wordlen(&s[b], c),  + 1))))
			return (NULL);
		f = 0;
		while (s[b] == c)
			b++;
		while (s[b] != c && s[b])
			words[k][f++] = s[b++];
		words[k][f] = '\0';
		k++;
	}	
	words[k] = NULL;
	return (words);
}

/*
int		main()
{
	char *arr = "hello my friend here goobye";
	char **str = ft_strsplit(arr,' ');
	int size = countWords(arr);
	int i = 0;
	//printf("%d\n", size);
	printf("%d\n", size);
	//printf("%lu", strlen(arr));
	while(str[i])
	{
		printf("%s", str[i]);
		i++;
	}
	return 0;
}
*/


