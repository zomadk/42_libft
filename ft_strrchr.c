/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:26:59 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 11:34:12 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;
	int		i;

	last_char = (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last_char = (char*)s;
		++s;
	}
	if (last_char)
		return (last_char);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
