/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:27:37 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/24 19:19:02 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(int *printed, va_list args)
{
	long long	n;

	n = (long long)va_arg(args, int);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		(*printed)++;
	}
	ft_puthexa(printed, (unsigned long long)n);
}

void	ft_print_X(int *printed, va_list args)
{
	long long	n;
	n = (long long)va_arg(args, int);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		(*printed)++;
	}
	ft_puthexa_caps(printed, (unsigned long long)n);
}

void	ft_print_p(int *printed, va_list args)
{
	void	*n;

	n = (void *)va_arg(args, void *);
	write(1, "0x", 2);
	(*printed) += 2;
	ft_puthexa(printed, (unsigned long long)n);
}

void	ft_print_null(int *printed)
{
	write(1, "(null)", 6);
	(*printed) += 6;
}

void	ft_puthexa_caps(int *printed, unsigned long long n)
{
	char	*base;
	char	c;

	base = "0123456789ABCDEF";
	if (n < 16)
	{
		c = base[n];
		write(1, &c, 1);
		(*printed)++;
	}
	else
	{
		ft_puthexa(printed, n / 16);
		ft_puthexa(printed, n % 16);
	}
}
