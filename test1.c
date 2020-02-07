/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:09:38 by cgamora           #+#    #+#             */
/*   Updated: 2020/02/07 16:37:48 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_month(int ost, int flag)
{
	if (ost <= 2678400)
		return (1);
	if (ost <= 5097600 + (flag * 86400))
		return (2);
	if (ost <= 7776000 + (flag * 86400))
		return (3);
	if (ost <= 10368000 + (flag * 86400))
		return (4);
	if (ost <= 13046400 + (flag * 86400))
		return (5);
	if (ost <= 15638400 + (flag * 86400))
		return (6);
	if (ost <= 18316800 + (flag * 86400))
		return (7);
	if (ost <= 20995200 + (flag * 86400))
		return (8);
	if (ost <= 23587200 + (flag * 86400))
		return (9);
	if (ost <= 26265600 + (flag * 86400))
		return (10);
	if (ost <= 28857600 + (flag * 86400))
		return (11);
	if (ost <= 31536000 + (flag * 86400))
		return (12);
	return (0);
}

int		ft_day(int day, int flag)
{
	if (day <= 31)
		return (day);
	if (day <= 59 + flag)
		return (day - 31);
	if (day <= 90 + flag)
		return (day - (59 + flag));
	if (day <= 120 + flag)
		return (day - (90 + flag));
	if (day <= 151 + flag)
		return (day - (120 + flag));
	if (day <= 181 + flag)
		return (day - (151 + flag));
	if (day <= 212 + flag)
		return (day - (181 + flag));
	if (day <= 243 + flag)
		return (day - (212 + flag));
	if (day <= 273 + flag)
		return (day - (243 + flag));
	if (day <= 304 + flag)
		return (day - (273 + flag));
	if (day <= 334 + flag)
		return (day - (304 + flag));
	if (day <= 365 + flag)
		return (day - (334 + flag));
	return (0);
}

void	ft_date_print(int i, int n)
{
	int k;

	k = 0;
	n += ((i + 2) % 4 == 0) ? 31622400 : 31536000;
	ft_putstr(ft_itoa(i + 1970));
	ft_putstr(ft_month(n, (1970 + i) % 4 == 0 ? 1 : 0) < 10 ? "-0" : "-");
	ft_putstr(ft_itoa(ft_month(n, (1970 + i) % 4 == 0 ? 1 : 0)));
	k = 1;
	k += n / 86400;
	n = n % 86400;
	ft_putstr(ft_day(k, (1970 + i) % 4 == 0 ? 1 : 0) < 10 ? "-0" : "-");
	ft_putstr(ft_itoa(ft_day(k, (1970 + i) % 4 == 0 ? 1 : 0)));
	ft_putstr((n / 3600) >= 10 ? "T" : "T0");
	ft_putstr(ft_itoa(n / 3600));
	n -= (n / 3600) * 3600;
	ft_putstr((n / 60) < 10 ? ":0" : ":");
	ft_putstr(ft_itoa(n / 60));
	n -= (n / 60) * 60;
	ft_putstr((n) < 10 ? ":0" : ":");
	ft_putstr(ft_itoa(n));
	ft_putchar('\n');
}

void	ft_date(int n)
{
	int i;

	i = -2;
	n += 31536000;
	while (n >= 0)
	{
		n -= 31536000;
		i++;
		if (n >= 0)
		{
			n -= 31536000;
			i++;
		}
		if (n >= 0)
		{
			n -= 31536000;
			i++;
		}
		if (n >= 0)
		{
			n -= 31622400;
			i++;
		}
	}
	ft_date_print(i, n);
}

int		main(void)
{
	ft_date(1581073012);
	ft_date(1585652188);
	ft_date(1588244188);
	ft_date(1538318064);
	ft_date(1543588464);
	ft_date(1546246922);
	ft_date(921293782);
	return (0);
}
