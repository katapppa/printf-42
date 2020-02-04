/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 18:51:03 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/03 15:34:32 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <float.h>
# include <stdlib.h>

typedef struct  s_par
{
    int     plus;
    int     min;
    int     hesh;
    int     prob;
    int     chislo;
    int     zero;
}               t_par;

int     ft_toeight(int chislo);
int     ft_sizenbr(int namba);
int     ft_tosixm(int chislo);
char    *ft_tosix(int chislo);
char    *ft_strupper(char *str);
void    ft_color(int a);
int     ft_binar(int chislo);
void    ft_checks(char c);

#endif