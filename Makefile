# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 17:29:32 by oelkhiar          #+#    #+#              #
#    Updated: 2022/12/05 15:53:37 by oelkhiar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC		:= cc
HDR = ft_printf.h
CFLAGS	:= -Wall -Wextra -Werror
FILES	:=    ft_printf.c ft_putchr.c ft_putnbr_u.c ft_putnbr_x.c ft_putstr.c ft_putnbr.c

OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
			ar -rc $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all