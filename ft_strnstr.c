/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:52:45 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 19:36:30 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int pos;
	unsigned int i;
	unsigned int b;

	b = 0;
	if (!*to_find)
		return ((char*)str);
	pos = 0;
	while (str[pos] != '\0' && (size_t)b < len)
	{
		if (str[pos] == to_find[0])
		{
			i = 0;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i]
					&& (size_t)i < len)
			{
				write(1, &to_find[b], 1);
				++b;
				++i;
			}
			if (to_find[i] == '\0')
				return ((char*)to_find);
		}
		++pos;
	}
}
