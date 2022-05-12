/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:28:01 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/16 17:59:02 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final_list;
	t_list	*malloc_list;

	final_list = NULL;
	while (lst)
	{
		malloc_list = ft_lstnew((*f)(lst->content));
		if (!malloc_list)
		{
			ft_lstclear(&final_list, del);
		}
		ft_lstadd_back(&final_list, malloc_list);
		lst = lst->next;
	}
	return (final_list);
}
