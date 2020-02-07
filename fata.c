void     ft_date(int i)
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
    // while(n > 0)
    // {
    //     k++;
    //     n -= 86400;
    // }
    //     n += 86400;