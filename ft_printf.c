/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:24:31 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/25 10:00:28 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_arg(const char *format, int *printed, va_list args)
{
	if (*format == 'c')
		ft_print_c(printed, args);
	else if (*format == 's')
		ft_print_s(printed, args);
	else if (*format == 'p')
		ft_print_p(printed, args);
	else if (*format == 'd')
		ft_print_i(printed, args);
	else if (*format == 'i')
		ft_print_i(printed, args);
	else if (*format == 'u')
		ft_print_u(printed, args);
	else if (*format == 'x')
		ft_print_x(printed, args);
	else if (*format == 'X')
		ft_print_X(printed, args);
	else if (*format == '%')
		ft_print_percent(printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	va_start(args, format);
	printed = 0;
	while (*format)
	{
		if (*format == '%')
		{
			printed--;
			format++;
			ft_print_arg(format, &printed, args);
		}
		else
			write(1, format, 1);
		printed++;
		format++;
	}
	va_end(args);
	return (printed);
}
