/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:39:36 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/12/05 15:54:26 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list args, char n)
{
	int	len;

	len = 0;
	if (n == 'c')
		len += ft_putchr(va_arg(args, int));
	else if (n == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (n == 'd' || n == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (n == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int));
	else if (n == 'x')
		len += ft_putnbr_x(va_arg(args, unsigned int), "0123456789abcdef");
	else if (n == 'X')
		len += ft_putnbr_x(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (n == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putnbr_x(va_arg(args, size_t), "0123456789abcdef");
	}
	else if (n == '%')
		len += ft_putchr('%');
	else
		len += ft_putchr(n);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[++i])
			len += check(args, s[i]);
		else if (!s[i])
			break ;
		else
			len += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
