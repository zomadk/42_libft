/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:35:24 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 19:18:54 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		b;
	int		len;
	char	*new;

	i = 0;
	b = 0;
	if (!(new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	if (s1[i] == '\0')
	{
		while (s2[b])
		{
			new[i] = s2[b];
			i++;
			b++;
		}
	}
	new[i] = '\0';
	return (new);
}
