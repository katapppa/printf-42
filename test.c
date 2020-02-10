/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:06:57 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/07 17:00:52 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char* format,...)
{
    va_list     faktor;
    va_list     bonus;
    int i = 0;

    va_start(faktor,format);
    va_start(bonus,format);
    while(va_arg(faktor,int))
    {
        i++;
    }
    // printf("\n\n%d\n",i);
    // printf("%d\n",va_arg(faktor, int));
    // printf("%d\n",va_arg(bonus, int));
    // printf("%d\n",va_arg(faktor, int));
    // printf("%d\n",va_arg(bonus, int));
    // printf("%d\n",va_arg(faktor, int));
    // printf("%d\n",va_arg(bonus, int));
    // printf("%d\n",va_arg(faktor, int));
    // printf("%d\n",va_arg(bonus, int));
    return 0;
}

int     main()
{
    long a;



    a=42;
    char c = '3';
    // ft_printf("%d%d%d%d",40,0,42,49,44);
    // printf("%'i",32423423);
    //printf("\n%d%d%d%2$d\n",34,42,21);
    // printf("%5d\n",44);
    // printf("%.2d\n",44);
    // printf("%05d\n",44);
    // printf("%+05d\n",44);
    // printf("%-05d\n",44);
    // printf("%0-5d\n",44);
    // printf("%0+5d\n",44);
    // printf("%+-5d\n",44);
    // printf("%-+5d\n",44);
    // printf("%+-05d\n",44);
    // printf("%-+05d\n",44);
    // printf("%+-#5d\n",44);
    // printf("%5+-#d\n",43);
    // printf("%5-#d\n",43);
    // printf("%5kdds\n",33);
    // printf("%5=d",44);
    // printf("%lf",a);
    // printf("\n\n%'d\n\n",33222111,3232);
    // printf("%d",system("date +%s"));
    
    return 1;
}
