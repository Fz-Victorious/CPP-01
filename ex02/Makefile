# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 17:09:32 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/21 18:52:21 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = refAndPtr

CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME =	main.cpp
#HEADERS = zombie.hpp
OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)
fclean: clean 
	rm -rf $(NAME)
re: fclean all
