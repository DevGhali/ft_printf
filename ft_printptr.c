/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:08:59 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/27 23:27:09 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void    ft_printptr2(uintptr_t ptr, int *ret)
{
    if (ptr >=16)
    {
        ft_printptr2(ptr / 16, ret);
        ft_printptr2(ptr % 16, ret);
    }
    else
    {
        if (ptr <= 9)
        {
            ft_putchar_fd((ptr + '0'), 1);
            *ret += 1;
        }
        else
        {
            ft_putchar_fd((ptr - 10 + 'a'), 1);
            *ret += 1;
        }
    }
}

void ft_printptr(unsigned long long ptr, int *ret)
{
    write(1, "0x", 2);
    *ret += 2;
    if (ptr == 0)
    {
        write(1, "0", 1);
        *ret += 1;
    }
    else
        ft_printptr2(ptr, ret);   
}