/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:49:07 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/12/02 17:26:18 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchr(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int c);
int	ft_putnbr_xu(unsigned int c);
int	ft_putnbr_xl(unsigned int c);
int	ft_putnbr_u(unsigned int c);
int	ft_printf(const char *s, ...);
int check(va_list args,char n);

#endif
