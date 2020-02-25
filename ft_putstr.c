/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:27:39 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 23:19:38 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		ft_putchar(str[pos]);
		pos++;
	}
}

int		main()
{
	char arr[] = "hey";
	ft_putstr(arr);
}
