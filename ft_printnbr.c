/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:18:15 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/27 22:27:14 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void ft_printnbr(int nbr, int *ret)
{
    char *itoad;
    
    itoad = ft_itoa(nbr);
    ft_printstr(itoad, ret); //if ret fails try assigning a new variable
    free(itoad);
}