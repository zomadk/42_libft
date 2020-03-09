/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:13:19 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/06 14:57:33 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		countlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			len;
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dst[i] != '\0')
		++i;
	while (src[b] != '\0' && b < dstsize)
	{
		dst[i] = src[b];
		i++;
		b++;
	}
	dst[i] = '\0';
	len = countlen(dst);
	return (len);
}
