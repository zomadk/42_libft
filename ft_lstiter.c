/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:34:05 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/11/06 21:44:29 by zmaduekw         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *next;

	if (!lst || !f)
		return;
	while (lst)
	{
		f(lst->content);
		next = lst->next;
		lst = next;
	}
}
