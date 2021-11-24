/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:27:51 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/19 14:49:35 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdarg.h>
int     ft_printf(const char *format, ...);
void	ft_print_c(int *printed, va_list args);
void	ft_print_s(int *printed, va_list args);
void	ft_print_p(int *printed, va_list args);
void	ft_print_d(int *printed, va_list args);
void	ft_print_i(int *printed, va_list args);
void	ft_print_u(int *printed, va_list args);
void	ft_print_x(int *printed, va_list args);
void	ft_print_%(int *printed);
#endif
