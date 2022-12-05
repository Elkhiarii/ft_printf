/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:59:37 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/12/05 15:35:41 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int k)
{
	int		len;
	long	c;

	c = k;
	len = 0;
	if (c < 0)
	{
		len += ft_putchr('-');
		c *= -1;
	}
	if (c > 9)
	{
		len += ft_putnbr(c / 10);
		c %= 10;
	}
	len += ft_putchr(c + 48);
	return (len);
}
