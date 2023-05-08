# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 12:55:54 by salperez          #+#    #+#              #
#    Updated: 2023/05/08 12:56:09 by salperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

SOURCES = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c ft_calloc.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

OBJ = $(SOURCES:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJ	=	$(BONUS:.c=.o)

RM = rm -f

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
bonus: $(OBJ) $(BONUS_OBJ)
	ar rs $(NAME) $(OBJ) $(BONUS_OBJ)
	
all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $?
	
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus