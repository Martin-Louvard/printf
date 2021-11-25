/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:27:37 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/25 11:39:09 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(int *printed, va_list args)
{
	unsigned int	n;

	n = (unsigned int)va_arg(args, int);
	ft_puthexa_uint(printed, (unsigned int)n, "0123456789abcdef");
}

void	ft_print_xcap(int *printed, va_list args)
{
	unsigned int	n;

	n = (unsigned int)va_arg(args, int);
	ft_puthexa_uint(printed, (unsigned int)n, "0123456789ABCDEF");
}

void	ft_print_p(int *printed, va_list args)
{
	size_t	n;

	n = (size_t)va_arg(args, size_t);
	write(1, "0x", 2);
	(*printed) += 2;
	if (!n)
	{
		write(1, "0", 1);
		(*printed)++;
		return ;
	}
	ft_puthexa_sizet(printed, n);
}

void	ft_print_null(int *printed)
{
	write(1, "(null)", 6);
	(*printed) += 6;
}

void	ft_puthexa_sizet(int *printed, size_t n)
{
	char	*base;
	char	c;

	base = "0123456789abcdef";
	if (n < 16)
	{
		c = base[n];
		write(1, &c, 1);
		(*printed)++;
	}
	else
	{
		ft_puthexa_sizet(printed, n / 16);
		ft_puthexa_sizet(printed, n % 16);
	}
}
