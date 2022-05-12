/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:18:14 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/09 17:41:23 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst2;
	const char	*src2;

	if (src == 0 && dst == 0)
		return (0);
	i = 0;
	dst2 = dst;
	src2 = src;
	while (n > i)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
