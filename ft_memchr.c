/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:05:37 by gmacias-          #+#    #+#             */
/*   Updated: 2022/01/20 17:33:07 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*abc;
	size_t		i;
	char		q;

	abc = (char *) s;
	q = (char)c;
	i = 0;
	while (i < n)
	{
		if (abc[i] == q)
		{
			return (&abc[i]);
		}
		i++;
	}
	return (NULL);
}
