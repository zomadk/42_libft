/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:00:26 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 20:34:55 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		b;
	int		f;
	int		k;

	b = 0;
	k = 0;
	if (!(words = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1)))
		return (NULL);
	while (k < ft_wordcount(s, c))
	{
		if (!(words[k] = (char *)malloc(sizeof(char) *
						(ft_wordlen(&s[b], c) + 1))))
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
