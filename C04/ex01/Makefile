# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/06 10:11:03 by rzafari           #+#    #+#              #
#    Updated: 2021/07/08 12:10:40 by rzafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Wasteland
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp FatalWeapon.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp BadRabbits.cpp main.cpp
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