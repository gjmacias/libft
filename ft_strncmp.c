/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:18:41 by gmacias-          #+#    #+#             */
/*   Updated: 2022/01/20 18:31:45 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a;
	unsigned char	b;

	if (!n)
		return (0);
	else
	{
		while (n > 1 && (*s1 != '\0' || *s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
			n--;
		}
		a = *s1;
		b = *s2;
		return (a - b);
	}
}
