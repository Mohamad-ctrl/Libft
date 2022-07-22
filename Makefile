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

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = libft.o

all:
	$(CC) ft_tolower.c ft_toupper.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_alnum.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c -o $(OBJ)
exec:
	./$(OBJ)
fclean:
	rm -rf $(OBJ)