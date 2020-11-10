/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:47:01 by zmaduekw          #+#    #+#             */
/*   Updated: 2020/08/26 17:29:54 by zmaduekw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current_node;

	if (!lst)
		return (NULL);
	head = 0;
	while (lst)
	{
		if (!(current_node = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(head, current_node);
		lst = lst->next;
	}
	return (head);
}
