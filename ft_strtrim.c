/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:16:28 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 18:36:07 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	int i;
	int k;
	char *space;
	
	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] && is_blank(s[i]))
			i++;
	k = ft_strlen(&s[i]) - 1;
	while (s[i] && is_blank(s[k + i]))
		k--;
	if (!(space = ft_strnew(k + 1)))
		return (NULL);
	ft_strncpy(space, &s[i], (k + 1));
	return (space);
}
