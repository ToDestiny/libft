# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/24 14:27:26 by acolas            #+#    #+#              #
#    Updated: 2017/04/24 15:14:03 by acolas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_putchar.c \

INC = libft.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$ $(CC) $(CFLAGS) -c $(SRC)
	@$ ar -rc $(NAME) $(OBJ)
	@$ ranlib $(NAME)

clean:
	@$ /bin/rm -f $(OBJ)
	
fclean: clean
	@$ /bin/rm -f $(NAME)

re: fclean all
