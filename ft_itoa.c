/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:19:25 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 20:45:57 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
