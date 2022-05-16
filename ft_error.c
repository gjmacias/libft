/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacias- <gmacias-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:01:14 by gmacias-          #+#    #+#             */
/*   Updated: 2022/05/16 17:02:02 by gmacias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_error(int nerror)
{
	if (nerror == 1)
		ft_putstr_fd("Ops! Malloc failed!", 1);
	if (nerror == 2)
		ft_putstr_fd("you need more parameters!!", 1);
	if (nerror == 3)
		ft_putstr_fd("the parameters are not correct type -h for help", 1);
	if (nerror == 4)
		ft_putstr_fd("bye", 1);
	if (nerror == 5)
		ft_putstr_fd("hello", 1);
	exit(EXIT_FAILURE);
}
