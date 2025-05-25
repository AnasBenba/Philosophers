CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = philosophers.c

OBJ = $(SRC:.c=.o)
NAME = philo

all: $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re

.SECONDARY: all