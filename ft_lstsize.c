/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:42:40 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/25 18:33:22 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list		*next;
	int			count;

	count = 0;
	while (lst)
	{
		next = lst->next;
		lst = next;
		count = count + 1;
	}
	return (count);
}
