/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:08:54 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/21 17:20:59 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


int 	main(void)
{
	char arrau[] = "string here";
	char *str;
	str = arrau;

	printf("%d", ft_strlen(arrau));
}

