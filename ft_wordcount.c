/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:21:08 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 20:23:51 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *str, char b)
{
	int c;

	c = 0;
	while (*str == b)
		str++;
	while (*str)
	{
		if (*str != b)
			c++;
		while (*str != '\0' && *str != b)
			str++;
		while (*str == b)
			str++;
	}
	return (c);
}
