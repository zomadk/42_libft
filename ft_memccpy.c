/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:41:55 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 10:59:16 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int						i;
	unsigned char			*dest;
	const unsigned char		*srcc;

	i = 0;
	dest = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	while (n-- > 0)
	{
		dest[i] = srcc[i];
		if ((unsigned char)c == srcc[i])
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
