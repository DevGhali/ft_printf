/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:38:35 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/27 22:15:25 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_count(unsigned int nbr)
{
    int ret;

    ret = 0;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        ret++;
    }
    return (ret);
}

char *ft_unsigneditoa(unsigned int nbr)
{
    char *str;
    int len;

    len = ft_count(nbr);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (0);
    str[len + 1] = '\0';
    while (nbr != 0)
    {
        str[len - 1] = (nbr % 10) + '0';
        nbr = nbr / 10;
        len--;
    }
    return (str);
}

void    ft_printunsigned(unsigned int nbr, int *ret)
{
    char *str;

    if (nbr == 0)
    {
        write(1, "0", 1);
        *ret += 1;
    }
    else
    {
        str = ft_unsigneditoa(nbr);
        ft_printstr(str, ret);
        free(str);
    }
}