# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 21:27:29 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/21 18:51:02 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violenceInutile

CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_NAME)

fclean: clean
	rm -rf $(NAME)
re: fclean all
