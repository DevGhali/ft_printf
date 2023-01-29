/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:45:03 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/29 18:58:33 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_format(va_list ap, const char format)
{
	int	ret;

	ret = 0;
	if (format == 's')
		ft_printstr(va_arg(ap, char *), &ret);
	else if (format == 'c')
		ft_printchar(va_arg(ap, int), &ret);
	else if (format == 'i' || format == 'd')
		ft_printnbr(va_arg(ap, int), &ret);
	else if (format == 'x' || format == 'X')
		ft_printhex(va_arg(ap, unsigned int), format, &ret);
	else if (format == '%')
		ft_printpercentage(&ret);
	else if (format == 'p')
		ft_printptr(va_arg(ap, unsigned long long), &ret);
	else if (format == 'u')
		ft_printunsigned(va_arg(ap, unsigned int), &ret);
	return (ret);
}
