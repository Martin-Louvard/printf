/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:40:57 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/25 09:41:02 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(int *printed, va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	(*printed)++;
}

void	ft_print_s(int *printed, va_list args)
{
	char	*s;
	size_t	len;

	s = (char *)va_arg(args, char *);
	if (!s)
	{
		ft_print_null(printed);
		return ;
	}
	len = ft_strlen(s);
	write(1, s, len);
	(*printed) += len;
}

void	ft_print_percent(int *printed)
{
	write(1, "%", 1);
	(*printed)++;
}

void	ft_print_i(int *printed, va_list args)
{
	long	n;

	n = (long)va_arg(args, int);
	if (n < 0)
	{
		write(1, "-", 1);
		(*printed)++;
		n *= -1;
	}
	ft_putnbr(printed, n);
}

void	ft_print_u(int *printed, va_list args)
{
	unsigned int	n;

	n = (unsigned int)va_arg(args, int);
	ft_putnbr_unsigned(printed, n);
}
