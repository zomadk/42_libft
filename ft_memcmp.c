/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:35:15 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 23:18:57 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const vois *s1, const void *s2, size_t n)
{
	unsigned char = *ptr;
	unsigned char = *ptr2;
	int i;

	ptr = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return (*s1 - *s2);
}

