/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:53:06 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/15 16:16:34 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (start > ft_strlen(s))
		i = 0;
	else if (ft_strlen(&s[start]) >= len)
		i = len;
	else
		i = ft_strlen(&s[start]);
	new = malloc((i + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[i] = '\0';
	if (i > 0)
		ft_memcpy(new, &s[start], i);
	return (new);
}
