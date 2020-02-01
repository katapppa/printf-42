/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:41:19 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/01 19:31:35 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_toeight(int chislo)
{
    int i;
    int fin;

    i = 1;
    fin = 0;
    while(chislo/8 > 0)
    {
        
        fin = fin + i * (chislo%8);
        i *= 10;
        chislo /=8;     
    }
    fin = fin + chislo * i;
    return(fin);
}

int     ft_sizenbr(int namba)
{
    int i;

    i = 1;
    while (namba/10 > 0)
    {
        i++;
        namba /=10;
    }
    return(i);
}

int     ft_tosixm(int chislo)
{
    int i;
    int fin;

    i = 1;
    fin = 0;
    while(chislo%16 > 0)
    {
        if (chislo%16 > 9 && chislo%16 <= 16)
            fin = fin + i * 1;
        if (chislo%16 < 10)
            fin = fin + i * (chislo%16);
        i *= 10;
        chislo /=16;     
    }
    if (chislo%16 > 9 && chislo%16 <= 16)
        fin = fin + 1 * i;
    return(ft_sizenbr(fin));
}

char    *ft_tosix(int chislo)
{
    char *s;
    int i;
    int g;

    i = ft_tosixm(chislo);
    g = i;
    s = (char *)malloc(i*sizeof(char));
    while(i > 0)
    {
        i--;
        if (chislo%16==10)
            s[i]='a';
        if (chislo%16==11)
            s[i]='b';
        if (chislo%16==12)
            s[i]='c';
        if (chislo%16==13)
            s[i]='d';
        if (chislo%16==14)
            s[i]='e';
        if (chislo%16==15)
            s[i]='f';
        if (chislo%16 < 10)
            s[i] = *ft_itoa(chislo%16);
        chislo /=16;     
    }
    s[g] = '\0';
    return(s);
}     

char    *ft_strupper(char *str)
{
    char *new;
    int i;

    i = 0;
    new = (char*)malloc(ft_strlen(str)*sizeof(char));
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            new[i] = str[i] - 32;
        else
            new[i] = str[i]; 
        i++;
    }
    new[i] = '\0';
    return (new);
}
