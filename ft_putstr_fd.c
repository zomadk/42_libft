/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:04:52 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/22 22:09:45 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		ft_putchar_fd(str[pos], fd);
		pos++;
	}
}

int		main()
{
	char arr[] = "hey";
	ft_putstr_fd(arr, 1);
}
