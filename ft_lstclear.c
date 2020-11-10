/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:58:58 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/25 19:33:29 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	t_list *node;

	node = *lst;
	while (*lst)
	{
		del(node->content);
		free(node);
		node = node->next;
	}
	*lst = NULL;
}
