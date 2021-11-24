/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:40:57 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/19 14:48:58 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	len = ft_strlen(s);
	write(1, s, len);
	*printed += len;
}

void	ft_print_%(int *printed)
{
	write(1, "%", 1);
	(*printed)++;
}
