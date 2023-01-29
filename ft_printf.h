/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:51:13 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/29 19:02:55 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_format(va_list ap, const char format);
int		ft_printf(const char *str, ...);
void	ft_putchar(int c);
void	ft_printchar(int c, int *ret);
void	ft_printstr(char *str, int *ret);
void	ft_putstr(char *str);
void	ft_printnbr(int nbr, int *ret);
void	ft_printstr(char *str, int *ret);
void	ft_printhex(unsigned int nbr, const char format, int *ret);
void	ft_printhex2(unsigned int nbr, const char format, int *ret);
void	ft_printpercentage(int *ret);
void	ft_printptr(unsigned long long ptr, int *ret);
void	ft_printptr2(uintptr_t ptr, int *ret);
void	ft_printunsigned(unsigned int nbr, int *ret);
char	*ft_unsigneditoa(unsigned int nbr);
int		ft_count(unsigned int nbr);

#endif