/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:41:55 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 18:35:08 by zmaduekw         ###   ########.fr       */
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
		if (c == srcc[i])
		{
			i++;
			break ;
		}
		i++;
	}
	return (dst);
}
