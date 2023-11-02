/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:06:42 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/16 17:21:25 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save_next;

	if (lst)
	{
		while (*lst)
		{
			save_next = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = save_next;
		}
	}
}
