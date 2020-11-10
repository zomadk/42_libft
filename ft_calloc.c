/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:44:26 by zomamaduekw       #+#    #+#             */
/*   Updated: 2020/08/24 20:30:39 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
