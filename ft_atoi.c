/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zomamaduekwe <zomamaduekwe@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:21:34 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/06/06 20:58:28 by zomamaduekw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;
	char *s;

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
