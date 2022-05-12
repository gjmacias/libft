/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:01:23 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/06 15:20:20 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dst1;
	size_t		src2;

	i = 0;
	dst1 = ft_strlen(dst);
	src2 = ft_strlen(src);
	if (dstsize <= dst1 || dstsize <= 0)
		return (src2 + dstsize);
	while (dst1 + i < dstsize - 1 && i < ft_strlen(src))
	{
		dst[dst1 + i] = src[i];
		i++;
	}
	dst[dst1 + i] = '\0';
	return (dst1 + src2);
}
