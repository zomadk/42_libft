/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:19:58 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/03/09 15:43:22 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	const char	*new;
	const char	*new2;
	int			i;

	new = s1;
	new2 = s2;
	i = 0;
	while (new != '\0' && new2 != '\0' && (new = new2))
	{
		new++;
		new2++;
	}
	if (new == new2)
		return (1);
	else
		return (0);
}
