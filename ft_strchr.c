/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:32:52 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/06 15:45:11 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*abc;
	int		tru;
	int		i;
	char	q;

	q = c;
	abc = (char *) s;
	tru = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == q)
			return (&abc[i]);
		i++;
	}
	if (s[i] == q)
		return (&abc[i]);
	return (NULL);
}
