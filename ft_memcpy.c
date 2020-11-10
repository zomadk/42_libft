/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:42:19 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 19:51:55 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int					i;
	unsigned char		*dest;
	const unsigned char	*srcc;

	i = 0;
	dest = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	while (n-- > 0)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}
