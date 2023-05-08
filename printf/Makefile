# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 12:55:54 by salperez          #+#    #+#              #
#    Updated: 2023/05/08 18:21:31 by salperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

SOURCES = ft_printf.c 

OBJ = $(SOURCES:.c=.o)

RM = rm -f

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $?
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re