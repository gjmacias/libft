/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:33:44 by gmacias-          #+#    #+#             */
/*   Updated: 2022/01/26 19:23:21 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count(char const a, char const *b)
{
	int	number;
	int	i;

	i = 0;
	number = 0;
	while (b[i] != '\0')
	{
		if (a == b[i])
			number = 1;
		i++;
	}
	return (number);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 1;
	while (ft_count(s1[i1], set) != 0)
		i1++;
	if (i1 >= ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_count(s1[ft_strlen(s1) - i2], set) != 0)
		i2++;
	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	s = malloc((ft_strlen(s1) - i2 - i1 + 2) * sizeof(char));
	if (s == NULL)
		return (NULL);
	ft_bzero(s, ft_strlen(s1) - i2 - i1 + 2);
	s = (char *)ft_memcpy(s, &s1[i1], ft_strlen(s1) - i2 - i1 + 1);
	return (s);
}
/*int main()
{
	char *s;

	s = ft_strtrim("abcdba", "acb");
	printf("%s", s);
}*/
