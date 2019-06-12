# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-beer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 14:00:16 by jde-beer          #+#    #+#              #
#    Updated: 2019/06/12 16:52:13 by jde-beer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CC = gcc

Cflags = -Wall -Werror -Wextra

CMP = -c -I $(HEADER)

SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c\
		  ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c\
		  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c\
		  ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c\
		  ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c\
		  ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c\
		  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c\
		  ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c\
		  ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_swap.c\
		  ft_tolower.c ft_toupper.c

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $((FLAGS) $(CMP) $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
