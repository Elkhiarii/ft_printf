/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:26:55 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/12/05 15:55:11 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned long c, char *base)
{
	int		len;

	len = 0;
	if (c > 15)
	{
		len += ft_putnbr_x(c / 16, base);
		len += write(1, &base[c %= 16], 1);
	}
	else
		len += write(1, &base[c], 1);
	return (len);
}
