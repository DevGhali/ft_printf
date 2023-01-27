/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:51:18 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/27 23:10:15 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		ft_printf(const char *format, ...)
{
    va_list ap;
    int     ret;
    int     i;

    va_start(ap, format);
    ret = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
           ret += ft_format(ap, format[i + 1]);
           i++;
        }
        else
        {
            ret++;
            ft_putchar(format[i]);
        }
        i++;
    }
    va_end(ap);
    return (ret);
}
