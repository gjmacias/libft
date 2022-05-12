/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:41:02 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/09 18:22:28 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*c1;

	i = 0;
	c1 = (char *) haystack;
	if (needle[i] == 0)
		return (c1);
	else if (len == 0)
		return (0);
	else
	{
		while (c1[i] != '\0' && i < (len - ft_strlen(needle) + 1))
		{
			if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
				return (&c1[i]);
			i++;
		}
	}
	return (0);
}
