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
	$(CC) test.c ft_tolower.c ft_toupper.c -o $(OBJ)
exec:
	./$(OBJ)
fclean:
	rm -rf $(OBJ)