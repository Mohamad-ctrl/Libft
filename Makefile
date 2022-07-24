# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 17:09:58 by mosharif          #+#    #+#              #
#    Updated: 2022/07/14 17:10:01 by mosharif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_strdup.c ft_memccpy.c ft_tolower.c ft_memcmp.c ft_memcpy.c ft_toupper.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_alnum.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c 
	$(CC) -c $< $^

exec:
	./$(OBJ)
fclean:
	rm -rf $(OBJ)