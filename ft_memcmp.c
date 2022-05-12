/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:27:35 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/09 17:42:50 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	i = 0;
	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	if (a == 0 && b == 0)
		return (0);
	else
	{
		while (n > 0)
		{
			if (a[i] != b[i])
				return (a[i] - b[i]);
			i++;
			n--;
		}
	}
	return (0);
}
