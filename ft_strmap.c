/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:48:28 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/06 15:15:17 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*space;

	i = 0;
	if (!(space = malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	while (*s)
	{
		space[i] = f(*(s));
		s++;
		i++;
	}
	space[i] = '\0';
	return (space);
}
