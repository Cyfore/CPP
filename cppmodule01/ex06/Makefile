SRC = main.cpp Karen.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f

UNAME = $(shell uname -s)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

ifeq ($(UNAME), Linux)
CPPFLAGS = -Wall -Wextra -std=c++98 -pedantic
$(warning "Linux detected! Disabling -Werror...")
endif

NAME = Karen

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
