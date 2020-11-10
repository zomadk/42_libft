/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:22:02 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 20:22:09 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		b;
	char	*bloc;

	i = 0;
	b = 0;
	if (s1 == NULL || s2 == NULL || !(bloc = (char *)malloc(ft_strlen(s1)
		+ ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i])
	{
		bloc[i] = s1[i];
		i++;
	}
	while (s2[b])
	{
		bloc[i] = s2[b];
		i++;
		b++;
	}
	bloc[i] = '\0';
	return (bloc);
}
