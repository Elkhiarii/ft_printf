/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:26:55 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/30 12:34:49 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xl(unsigned int c)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (c > 15)
	{
		ft_putnbr_xl(c / 16);
		c %= 16;
	}
	len += write(1, &base[c], 1);
	return (len);
}
