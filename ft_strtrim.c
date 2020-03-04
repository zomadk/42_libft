/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:16:28 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 19:50:25 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		len;
	int		i;
	int		b;

	len = ft_strlen(s);
	i = 0;
	b = 0;
	if (!(new = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		new[b] = s[i];
		i++;
		b++;
	}
	new[b] = '\0';
	return (new);
}
