/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:04:45 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 20:06:08 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		sign;
	char	*s;

	i = 0;
	res = 0;
	sign = 1;
	s = (char *)str;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\r'
			|| s[i] == '\v' || s[i] == '\f' || s[i] == '\n')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		res = ((res * 10) + (s[i] - '0'));
		i++;
	}
	return (res * sign);
}
