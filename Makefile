# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 10:20:36 by nmoilane          #+#    #+#              #
#    Updated: 2024/05/06 18:38:00 by nmoilane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC	= ft_isalnum.c ft_isdigit.c ft_memset.c ft_atoi.c ft_isalpha.c \
	  ft_isprint.c ft_strlen.c ft_bzero.c ft_isascii.c ft_memcpy.c \
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	  ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c

AR	= ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror


OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):	 $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $?

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
