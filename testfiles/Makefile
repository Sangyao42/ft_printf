NAME = test.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TEST = test.c
LIB = libftprintf.a
SRC_DIR = ../src

debug: CFLAGS += -g
debug: all

all: $(NAME)

$(NAME): $(TEST) lib
	$(CC) $(CFLAGS) $(TEST) -L./$(SRC_DIR) -lftprintf -o $(NAME)

lib:
	make -C $(SRC_DIR) all

clean:
	make -C $(SRC_DIR) fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
