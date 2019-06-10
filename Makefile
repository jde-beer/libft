# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 14:00:16 by jde-beer          #+#    #+#              #
#    Updated: 2019/06/10 16:22:24 by jde-beer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

Cflags = -Wall -Werror -Wextra

SOURCES = $(realpath $(shell find . -type f))

all: $(NAME)

$(NAME):
	mkdir objs; \
	cd objs; \
	$(CC) $((FLAGS) -c $(SOURCES)
	ar rc $(NAME) $(shell find objs -type f)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
