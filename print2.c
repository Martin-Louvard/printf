/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:27:37 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/24 17:46:03 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_x(int *printed, va_list args)
{
	unsigned int	n;

	n = (unsigned int)va_arg(args, int);
	ft_puthexa(printed, n);
}

void	ft_print_p(int *printed, va_list args)
{
	void	*n;

	n = (void *)va_arg(args, void *);
	write(1, "0x", 2);
	(*printed) += 2;
	ft_puthexa(printed, (unsigned int)n);
}
