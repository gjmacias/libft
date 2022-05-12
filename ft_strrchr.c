/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:43:08 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/06 15:45:14 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*abc;
	int		i;
	char	q;

	q = c;
	abc = (char *) s;
	i = ft_strlen(s);
	while (s[i] != q && i >= 0)
		i--;
	if (i == -1)
		return (NULL);
	return (&abc[i]);
}
