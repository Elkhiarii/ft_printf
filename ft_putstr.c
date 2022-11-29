/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:55:22 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/29 18:38:40 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if (s == NULL)
		i += ft_putstr("(null)");
	while (!s[j])
	{
		i += ft_putchr(s[i]);
		j++;
	}
	return (j);
}
