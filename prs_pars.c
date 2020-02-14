/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_pars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 19:54:39 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/14 19:54:47 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     check_bukvuc(t_printf *pf, int i, int flag)
{
    char *str;
    int c;

    str = "diouxXcspfFеLt";
    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] == pf->format[i])
            flag++;
        c++;
    }
    return (flag);
}

int     check_bukvu(t_printf *pf, int i, int flag, int c)
{
    if (ft_isalpha(pf->format[i]))
    {
        if (pf->format[i] == 'l' || (pf->format[i] == 'h') || (pf->format[i] == 'L'))
        {
            if (pf->format[i] == 'l' && pf->format[i+1] == 'l')
                i++;
            if (pf->format[i] == 'h' && pf->format[i+1] == 'h')
                i++;
            i++;
        }
        flag = check_bukvuc(pf, i, flag);
        if (flag != 1)
        {
            pf->i++;
            return (0);
        }
    }
    else
    {
        pf->i++;
        return (0);   
    }
    return (1);
}

int     check_flags(t_printf *pf)
{
    int c;
    int i;
    int flag;

    flag = 0;
    i = (pf->i) + 1;
    c = i;
    while (!ft_isalpha(pf->format[i]))
    {
        if (pf->format[i] == '+' || pf->format[i] == '-')
            c++;
        if (pf->format[i] >= '0' && pf->format[i] <= '9')
            c++;
        if (pf->format[i] == '.' || pf->format[i] == '#')
            c++;
        if (pf->format[i] == ' ')
            c++;
        if (c == i)
        {
            pf->i++;
            return 0;
        }
        i++;
    }
    return (check_bukvu(pf, i, flag, c));
}