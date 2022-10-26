# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eulker <eulker@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:26:53 by eulker            #+#    #+#              #
#    Updated: 2022/10/01 15:26:54 by eulker           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Orthodox
SRCS = *.cpp
CMP = c++
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	$(CMP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean : clean

re: fclean all