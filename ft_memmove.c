/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:19:06 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/09 17:54:50 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	i = 0;
	if (!a && !b)
		return (NULL);
	if (a < b)
	{
		while (len > 0)
		{
			a[i] = b[i];
			i++;
			len--;
		}
	}
	while (len > 0)
	{
		a[len - 1] = b[len - 1];
		len--;
	}
	return (dst);
}
