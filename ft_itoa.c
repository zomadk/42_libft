/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:19:25 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/02 18:16:25 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		numlen(int c)
{
	int i;

	i = 0;
	if (c == 0)
		return (1);
	while (c > 0)
	{
		c /= 10;
		i++;
	}
	if (c > 0)
	{
		i = 1;
		while (c > 0)
		{
			c /= 10;
			i++;
		}
	}
	return (i);
}

char	*checker(char *spot, int n, int len, int i)
{
	if (n < 10 && n >= 0)
	{
		spot[i] = n + '0';
		i++;
	}
	if (n >= 10)
	{
		while (len-- && (n != 0))
		{
			spot[len] = (n % 10) + '0';
			n = n / 10;
		}
	}
	return (spot);
}

char	*ft_itoa(int n)
{
	char	*spot;
	int		i;
	int		len;

	i = 0;
	len = numlen(n);
	if (!(spot = malloc(sizeof(int) * len + 1)))
		return (NULL);
	spot[len] = '\0';
	if (n < 0)
	{
		spot[0] = '-';
		n *= -1;
		i++;
	}
	spot = checker(spot, n, len, i);
	return (spot);
}
