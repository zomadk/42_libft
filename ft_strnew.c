/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:21:38 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 19:30:13 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnew(size_t size)
{
	char	*str;

	if (!(str = malloc(size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
