/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:22:38 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/29 19:20:14 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_printstr(char *str, int *ret)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		*ret += 6;
	}
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			*ret += 1;
		}
	}
}
