NAME = test.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TEST = test.c
LIB = libftprintf.a
SRC_DIR = ../src
# MAKE = make
# SRCS = ft_printf.c\
#        print_addr.c\
#        print_characters.c\
#        print_numbers.c\
# 	   spec_write.c
# OBJS = $(SRCS:.c=.o)

all: $(NAME)
	./$(NAME)

$(NAME): $(TEST) $(LIB)
	$(CC) $(CFLAGS) $(TEST) -L./$(SRC_DIR) -lftprintf

$(SRC_DIR)/$(LIB):
	make -C $(SRC_DIR) re

clean:
	make -C $(SRC_DIR) fclean

fclean: clean
	rm -f $(NAME)


re: fclean all
