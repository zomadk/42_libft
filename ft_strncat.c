/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:55:19 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 19:27:16 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	unsigned int i;
	unsigned int b;

	i = 0;
	b = 0;
	while (dst[i] != '\0')
		++i;
	while (src[b] != '\0' && b < n)
	{
		dst[i] = src[b];
		i++;
		b++;
	}
	dst[i] = '\0';
	return (dst);
}
