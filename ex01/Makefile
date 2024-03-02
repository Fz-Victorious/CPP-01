# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 05:52:46 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/21 17:01:00 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = main.cpp zombieHorde.cpp Zombie.cpp
HEADERS = Zombie.hpp
OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)
fclean: clean 
	rm -rf $(NAME)
re: fclean all
