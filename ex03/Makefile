# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 21:51:54 by rshatra           #+#    #+#              #
#    Updated: 2024/09/17 18:58:43 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
