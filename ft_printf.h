/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 18:51:03 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/01 19:31:14 by cgamora          ###   ########.fr       */
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

int     ft_toeight(int chislo);
int     ft_sizenbr(int namba);
int     ft_tosixm(int chislo);
char    *ft_tosix(int chislo);
char    *ft_strupper(char *str);

#endif