/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:05:43 by gmacias-          #+#    #+#             */
/*   Updated: 2022/02/09 17:36:30 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_fill_splited(size_t num, char **splited, char const *s, char c)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (y < num)
	{
		x = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			splited[y][x] = *s;
			x++;
			s++;
		}
		splited[y][x] = '\0';
		y++;
	}
}

size_t	ft_how_many_char(char const *s, char c)
{
	size_t	space;

	space = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		space++;
		s++;
	}
	return (space);
}

int	ft_malloc_in_splited(size_t numof_splits, char **splited, char const *s,
		char c)
{
	size_t	num;

	num = 0;
	while (num < numof_splits)
	{
		splited[num] = malloc((ft_how_many_char(s, c) + 1) * sizeof(char));
		if (splited[num] == NULL)
		{
			while (num > 0)
			{
				free(splited[num - 1]);
				num--;
			}
			return (0);
		}
		while (*s == c)
			s++;
		num++;
		s += ft_how_many_char(s, c);
	}
	return (1);
}

size_t	ft_how_many_splits(char const *s, char c)
{
	size_t	strings;
	size_t	n;

	n = 0;
	strings = 0;
	while (s[n])
	{
		while (s[n] == c)
			n++;
		if (s[n] != c && s[n])
			strings++;
		while (s[n] != c && s[n])
			n++;
	}
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char			**splited;
	size_t			numof_splits;
	const char		*temp;

	temp = s;
	if (!s)
		return (NULL);
	numof_splits = ft_how_many_splits(s, c);
	splited = malloc((numof_splits + 1) * sizeof (char *));
	if (splited == NULL)
		return (NULL);
	if (ft_malloc_in_splited(numof_splits, splited, s, c) == 0)
	{
		free(splited);
		return (NULL);
	}
	ft_fill_splited(numof_splits, splited, temp, c);
	splited[numof_splits] = 0;
	return (splited);
}
