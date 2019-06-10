# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 14:00:16 by jde-beer          #+#    #+#              #
#    Updated: 2019/06/10 11:43:18 by jde-beer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

Cflags = -Wall -Werror -Wextra

SOURCES = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME):
	$(CC) $((FLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
