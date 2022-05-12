/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:40:47 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/06 15:06:00 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_space(int i, int n, int *negative)
{
	while (n != 0)
	{
		if (n < 0)
		{
			*negative = 1;
			n = -n;
		}
		n /= 10;
		i++;
	}
	return (i + *negative);
}

int	ft_value_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	int		negative;
	char	*s;
	int		space;

	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	negative = 0;
	space = ft_space(i, n, &negative);
	s = malloc((space + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (negative == 1)
		s[0] = '-';
	while (n != 0)
	{
		s[space - i - 1] = (ft_value_abs(n % 10) + '0');
		n = n / 10;
		i++;
	}
	s[space] = '\0';
	return (s);
}
