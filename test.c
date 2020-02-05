#include "ft_printf.h"

int     ft_month(int day, int flag)
{
    if (day < 31)
        return (day);
    if (day < 59 + flag)
        return (day - 31);
    if (day < 90 + flag)
        return (day- 59);
    if (day < 120+ flag)
        return (day - 90);
    if (day < 151+ flag)
        return (day - 120);
    if (day < 181+ flag)
        return (day - 151);
    if (day < 212+ flag)
        return (day - 181);
    if (day < 243+ flag)
        return (day - 212);
    if (day < 273+ flag)
        return (day - 243);
    if (day < 304+ flag)
        return (day - 273);
    if (day < 334+ flag)
        return (day - 304);
    if (day <= 365+ flag)
        return (day - 334);
    return (0);
}

void     date(int i)
{
    int day;
    int year;
    int month;
    int zl;
    int hour;
    int min;
    char stre[19];

    ft_putstr(ft_itoa(year = i/31436000+1970)); 
    zl = (year-1969)/4;
    month = i/2629743 + 1;
    ft_putchar('-');
    ft_putstr(ft_itoa(month = month%12));
    ft_putchar('-');    
    day = i/86400;
    i = i - day*86400;
    day -= zl;
    day %= 365;
    ft_putstr(ft_itoa(day = ft_month(day, year%4>0 ? 0:1)));
    ft_putchar('T');
    ft_putstr(ft_itoa(hour = i/3600));
    ft_putchar(':');  
    i -= hour*3600;
    ft_putstr(ft_itoa(min = i/60));
    i -= min*60;
    ft_putchar(':');
    ft_putstr(ft_itoa(i));
    ft_putstr("\n");
}

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
    date(1584652923);
    date(1584566523);
    date(1584566523);
    date(1552944123);
    date(1521408123);
    date(1489872123);
    date(1458336123);
    date(1426713723);
    date(1395177723);
    date(1363641723);
    date(1332105723);
    date(1580922278 );
    date(1549382710);
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