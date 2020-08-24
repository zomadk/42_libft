/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:35:24 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/06/08 21:12:48 by zomamaduekw      ###   ########.fr       */
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
	if (s1 == NULL || s2 == NULL ||!(bloc= malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
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
