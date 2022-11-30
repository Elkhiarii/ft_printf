/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:15:47 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/30 12:29:03 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xu(unsigned int c)
{
	char	*base;
	int		len;

	base = "0123456789ABCDEF";
	len = 0;
	if (c > 15)
	{
		ft_putnbr_x(c / 16);
		c %= 16;
	}
	len += write(1, &base[c], 1);
	return (len);
}
