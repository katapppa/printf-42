/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:38:25 by cgamora           #+#    #+#             */
/*   Updated: 2020/01/31 19:37:30 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char* format, ...)
{
    int     	i;
    char    	*c;
    char    	b;
	int     	cg;
    va_list 	factor;
    va_start(factor, format);

    c = (char *)format;
    while(*c)
    {
        if(*c!='%')
            write(1, c, 1);
        if(*c=='%')
        {
            c++;
            if(*c=='c')
            {
                b = va_arg(factor, int);
                write(1, &b, 1);
            }
			if(*c=='d' || *c=='i')
			{
				ft_putstr(ft_itoa(va_arg(factor, int)));
			}
            if(*c=='s')
            {
                ft_putstr(va_arg(factor, char*));
            }
            if(*c=='p')
            {
                ft_putstr(va_arg(factor, void*));
            }
            if(*c=='%')
                write(1, "%", 1);
        }
        c++;
    }
    va_end(factor);
    return 0;
}

int     main(void)
{
    int *ptr;
    int a = 44;
    ptr = &a;
    ft_printf("Vivodim chislo = %d\nVivodim bukvu = %c\nVivodim stroku = %s\nVivodim chislo = %i\n%p\n%%",24,'a',"asdasd",244,ptr);
    //printf("if %d    %c  %d",'a',234,'a');
    //printf("\033[1;31m3dasd \033[0m;");
    //write(1, "\033[22;34m", 8);
    //write(1, "A \n", 3);
    //write(1, "\033[0m", 4);
    //write(1, "a", 1);
    //printf("%d",system("date +%s"));
    // daa = printf("%d",popen("date +%s", "r"));
    // printf("%d",daa);
    return 0;
}
