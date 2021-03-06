/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:27:51 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/25 11:39:53 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_print_c(int *printed, va_list args);
void	ft_print_s(int *printed, va_list args);
void	ft_print_p(int *printed, va_list args);
void	ft_print_i(int *printed, va_list args);
void	ft_print_u(int *printed, va_list args);
void	ft_print_x(int *printed, va_list args);
void	ft_print_percent(int *printed);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int *printed, long n);
void	ft_putnbr_unsigned(int *printed, unsigned int n);
void	ft_puthexa_uint(int *printed, unsigned int n, char *base);
void	ft_print_null(int *printed);
void	ft_puthexa_sizet(int *printed, size_t n);
void	ft_print_xcap(int *printed, va_list args);
#endif
