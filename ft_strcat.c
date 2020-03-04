/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 23:18:34 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 19:02:25 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	unsigned int i;
	unsigned int b;

	i = 0;
	b = 0;
	while (dst[i] != '\0')
		++i;
	while (src[b] != '\0')
	{
		dst[i] = src[b];
		i++;
		b++;
	}
	dst[i] = '\0';
	return (dst);
}
