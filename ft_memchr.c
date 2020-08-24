/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:49:55 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/06/06 22:05:45 by zomamaduekw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char*)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)c)
			return (&arr[i]);
		i++;
	}
	return (NULL);
}
