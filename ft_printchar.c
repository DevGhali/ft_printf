/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:08:57 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/29 19:24:11 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_printchar(int c, int *ret)
{
	write(1, &c, 1);
	*ret += 1;
}
