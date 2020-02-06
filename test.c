#include "ft_printf.h"

int     ft_month(int ost, int flag)
{
    if (ost <= 2678400)
        return (1);
    if (ost <= 5097600 + (flag*86400))
        return (2);
    if (ost <= 7776000 + (flag*86400))
        return (3);
    if (ost <= 10368000+(flag*86400))
        return (4);
    if (ost <= 13046400+(flag*86400))
        return (5);
    if (ost <= 15638400+ (flag*86400))
        return (6);
    if (ost <= 18316800 +(flag*86400))
        return (7);
    if (ost <= 20995200 +(flag*86400))
        return (8);
    if (ost <= 23587200 + (flag*86400))
        return (9);
    if (ost <= 26265600 +(flag*86400))
        return (10);
    if (ost <= 28857600 +(flag*86400))
        return (11);
    if (ost <= 31536000 +(flag*86400))
        return (12);
    return (0);
}

int     ft_day(int day, int flag)
{
    if (day <= 31)
        return (day);
    if (day <= 59 + flag)
        return (day - 31);
    if (day <= 90 + flag)
        return (day- (59 + flag));
    if (day <= 120+ flag)
        return (day - (90 + flag));
    if (day <= 151+ flag)
        return (day - (120 + flag));
    if (day <= 181+ flag)
        return (day - (151 + flag));
    if (day <= 212+ flag)
        return (day - (181 + flag));
    if (day <= 243+ flag)
        return (day - (212 + flag));
    if (day <= 273+ flag)
        return (day - (243 + flag));
    if (day <= 304+ flag)
        return (day - (273 + flag));
    if (day <= 334+ flag)
        return (day - (304 + flag));
    if (day <= 365+ flag)
        return (day - (334 + flag));
    return (0);
}

void ft_date(int n)
{
    int i;
    int day;
    int month;
    int hour;
    int min;
    int k = 0,l = 0;

    i = 0;
    day = 0;
    while (n > 0)
    {
        if (n > 0)
        {
            n -= 31536000;
            i++;
            k++;
        }
        if (n > 0)
        {
            n -= 31536000;
            i++;
        }
        if (n > 0)
        {
            n -= 31536000;
            i++;
        }
        if (n > 0)
        {
            n -= 31622400;
            i++;
            l++;
        }
    }
    
    if(k==l)
        n += 31622400;
    else
        n += 31536000;
    i -= 2;
    month = 0;
    month = ft_month(n,(1970+i)%4==0?1:0);
    while(n > 0)
    {
        day++;
        n -= 86400;
    }
        n += 86400;
    day = ft_day(day,(1970+i)%4==0?1:0);
    hour = 0;
    hour = n/3600;
    n  -= hour * 3600;
    min = 0;
    min = n/60;
    n -= min * 60;
    printf("\nGOD: %d OST: %d",i + 1970,n);
    printf("\nMONTH: %d",month);
    printf("\nDAY: %d\n", day);
    printf("HOUR: %d",hour);
    printf("\nMINUTS: %d",min);
    printf("\nSEC: %d",n);
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
    ft_date(704712733);
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
