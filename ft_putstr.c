/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:55:22 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/12/02 17:26:36 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	if (!s)
		return (write(1, "null", 6));
	while (s[j])
	{
		len += ft_putchr(s[j]);
		j++;
	}
	return (len);
}
