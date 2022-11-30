/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:36:01 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/30 13:26:58 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int c)
{
	int	len;

	len = 0;
	if (c > 9)
	{
		ft_putnbr_u(c / 10);
		c %= 10;
	}
	len += ft_putchr(c + 48);
	return (len);
}
