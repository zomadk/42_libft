/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 23:20:27 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/06 15:16:47 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int				pos;
	unsigned char	*ptr;

	pos = 0;
	ptr = (unsigned char*)s;
	while (ptr[pos] != '\0')
	{
		ft_putchar(ptr[pos]);
		pos++;
	}
	write(1, "\n", 1);
}
