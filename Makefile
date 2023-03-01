# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 18:38:20 by  amangold         #+#    #+#              #
#    Updated: 2023/02/28 15:39:59 by  amangold        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc 
CFLAGS=-Wall -Wextra -Werror
NAME=libftprintf.a
DEPS=libftprintf.h
MANDATORY= ft_printf.c
SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putptr.c ft_putnbr.c ft_putstr.c ft_putui.c
OBJ=$(SRCS:.c=.o)

%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

all: $(NAME)

test: $(OBJ)
	$(CC) -o $@ $^ && ./test

clean:

	rm -f *.o

fclean: clean

	rm -f $(NAME)

re: fclean all

.PHONY:
	all bonus clean fclean re