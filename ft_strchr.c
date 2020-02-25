/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:27:01 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/02/24 15:46:37 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)s);
		++s;
	}
	if (c == '\0')
		return (NULL);
	return (0);
}

int		main()
{
	char array[] = "arrayhe1zel1op";
	
	printf("%s", ft_strchr(array, '1'));
}

