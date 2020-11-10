/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:19:25 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/24 20:02:26 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_checker(char *spot, int n, int len, int i)
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

size_t	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < len)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*spot;
	int		i;
	int		len;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nbrlen(n);
	if (!(spot = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	spot[len] = '\0';
	if (n < 0)
	{
		spot[0] = '-';
		n *= -1;
		i++;
	}
	spot = ft_checker(spot, n, len, i);
	return (spot);
}
