/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:49:49 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/19 13:36:49 by zomamaduekw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*space;

	i = 0;
	if (!s || !(space = malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	while (*s)
	{
		space[i] = f(i, (*s));
		i++;
		s++;
	}
	space[i] = '\0';
	return (space);
}