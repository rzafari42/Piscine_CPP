# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/06 10:11:03 by rzafari           #+#    #+#              #
#    Updated: 2021/07/02 14:47:20 by rzafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sorcerer
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = Peon.cpp Sorcerer.cpp Victim.cpp More.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all