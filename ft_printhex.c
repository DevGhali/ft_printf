/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:30:20 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/29 19:14:26 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_printhex2(unsigned int nbr, const char format, int *ret)
{
	if (nbr >= 16)
	{
		ft_printhex2(nbr / 16, format, ret);
		ft_printhex2(nbr % 16, format, ret);
	}
	else
	{
		if (nbr <= 9)
			ft_printchar((nbr + '0'), ret);
		else
		{
			if (format == 'x')
				ft_printchar((nbr - 10 + 'a'), ret);
			if (format == 'X')
				ft_printchar((nbr - 10 + 'A'), ret);
		}
	}
}

void	ft_printhex(unsigned int nbr, const char format, int *ret)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		*ret += 1;
	}
	else
	{
		ft_printhex2(nbr, format, ret);
	}
}
