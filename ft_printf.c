/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:38:25 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/02 18:20:38 by cgamora          ###   ########.fr       */
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
        if(*c=='{' && *(c+2)=='}')
        {
            c++;
            ft_color(ft_atoi(c));
            c+=2;
        }
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
            // if(*c=='p')
            // {
            //     ft_putstr(va_arg(factor, void*));
            // }
            if(*c=='o')
            {
                ft_putstr(ft_itoa(ft_toeight(va_arg(factor,int))));
            }
            if(*c=='b')
                ft_putstr(ft_itoa(ft_binar(va_arg(factor,int))));
            if(*c=='u')
            {
                if(va_arg(factor,int)>=0)
                    ft_putstr(ft_itoa(va_arg(factor, int)));
                else
                    ft_putstr(ft_itoa(4294967295+va_arg(factor,int)));           
            }
            if(*c=='x')
            {
                ft_putstr(ft_tosix(va_arg(factor, int)));
            }
            if(*c=='X')
            {
                ft_putstr(ft_strupper(ft_tosix(va_arg(factor, int))));
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
    ft_printf("Vivodim chislo = %d\nVivodim bukvu = %c\nVivodim stroku = %s\nVivodim chislo = %i\n\n",-2147483649,'a',"asdasd",244);
    ft_printf("FLag %%o = %o",34);  
    ft_printf("FLag %%u = %u",-34);
    ft_printf("\n\nFLag %%x = %x",34);
    ft_printf("\nFLag %%X = %X",34);
    ft_printf("\nasldalsd{1}fdasdasdsdssada{7}sadads{0}fin");
    ft_printf("\n\n%b",992);
    printf("\n%x",34);
    printf("\n%X",34);
    printf("\n\n%p",&ptr);
    printf("\n%o",-34);
    printf("\n%u",-34);
    //printf("\n%h",33);
    //printf("if %d    %c  %d",'a',234,'a');
    //printf("%d",system("date +%s"));
    // daa = printf("%d",popen("date +%s", "r"));
    // printf("%d",daa);
    return 0;
}
