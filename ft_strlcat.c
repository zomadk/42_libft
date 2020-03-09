/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:13:19 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 15:27:30 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t b;

	i = 0;
	b = 0;
	while (dst[i] != '\0' && i < dstsize)
		++i;
	b = i;
	while (src[i - b] && i + 1 < dstsize)
	{
		dst[i] = src[i - b];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (b + ft_strlen(src));
}
