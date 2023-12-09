# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbajji <cbajji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 13:30:28 by cbajji            #+#    #+#              #
#    Updated: 2023/12/07 19:03:17 by cbajji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	ft_printf.a
HEAD	:=	ft_printf.h
CC		:=	cc
CFLAGS	:=	-Wall -Wextra -Werror
AR		:=	ar rcs
RM		:=	rm -f

SRCS	:=	ft_printf.c ft_putadd.c ft_putchar.c ft_putnbr_base.c ft_putnbr_u.c ft_putnbr.c ft_putstr.c

OBJS	:=	$(SRCS:%c=%o)

all		:	 $(NAME)

%o		:	%c $(HEAD)
			$(CC) $(CFLAGS) -c -o $@ $<

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all