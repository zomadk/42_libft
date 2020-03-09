/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:35:15 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 15:34:56 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	i = 0;
	while ((i < n) && one[i] == two[i])
		i++;
	if (i == n)
		return (0);
	return (one[i] - two[i]);
}
