/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_col.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 15:23:13 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/02 19:20:53 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_color(int a)
{
    if(a==1)
        write(1, "\x1b[31m", 5);
    if(a==2)
        write(1, "\x1b[32m", 5);
    if(a==3)
        write(1, "\x1b[33m", 5);
    if(a==4)
        write(1, "\x1b[34m", 5);
    if(a==5)
        write(1, "\x1b[35m", 5);
    if(a==6)
        write(1, "\x1b[36m", 5);
    if(a==0)
        write(1, "\x1b[0m",4);
}

int     ft_binar(int chislo)
{
    int i;
    int fin;

    i = 1;
    fin = 0;
    while (chislo/2>0)
    {
        fin = fin + chislo%2 * i;
        i *=10;
        chislo/=2;
    }
    fin = fin + chislo%2 * i;
    return (fin);
}

t_par       *ft_struc()
{
    t_par       *new;
    new = (t_par*)malloc(sizeof(t_par));
    if (new == NULL)
        return NULL;
    new->chislo = 0;
    new->hesh = 0;
    new->min = 0;
    new->plus = 0;
    new->prob = 0;
    new->zero = 0;    
    return (new);
}

int     ft_checks(char c)
{
    t_par   *head;
    head = ft_struc();
    
    //if(c=='')
}