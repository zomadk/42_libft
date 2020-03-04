/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:49:55 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 18:38:21 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	size_t			b;
	unsigned char	*ptr;

	i = 0;
	b = 0;
	ptr = (unsigned char*)s;
	while (i++ <= n)
	{
		if (ptr[b] == (unsigned char)c)
			return ((void*)ptr);
		b++;
	}
	return (NULL);
}
