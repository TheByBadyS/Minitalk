# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 11:52:50 by toaktas           #+#    #+#              #
#    Updated: 2023/07/05 11:52:54 by toaktas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Utils.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): all 

all: server client

server: server.c
	$(CC) $(CFLAGS) -o server server.c ./Utils/*.c ./Utils/ft_printf/*.c

client: client.c 
	$(CC) $(CFLAGS) -o client client.c ./Utils/*.c ./Utils/ft_printf/*.c

clean:
	rm -rf client
	rm -rf server

fclean: clean

re: fclean all

.PHONY: all clean fclean re
