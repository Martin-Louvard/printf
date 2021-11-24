/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:00:53 by malouvar          #+#    #+#             */
/*   Updated: 2021/11/24 17:36:09 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c && s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	else
		return (NULL);
}

void	ft_putnbr(int *printed, long n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
		(*printed)++;
	}
	else
	{
		ft_putnbr(printed, n / 10);
		ft_putnbr(printed, n % 10);
	}
}

void	ft_putnbr_unsigned(int *printed, unsigned int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
		(*printed)++;
	}
	else
	{
		ft_putnbr(printed, n / 10);
		ft_putnbr(printed, n % 10);
	}
}

void	ft_puthexa(int *printed, unsigned int n)
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
		ft_puthexa(printed, n / 16);
		ft_puthexa(printed, n % 16);
	}
}
