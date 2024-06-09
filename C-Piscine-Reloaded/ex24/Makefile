CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS_DIR = srcs
INCS_DIR = includes

OBJS = $(SRCS:$(SRCS_DIR)/%.c=%.o)

SRCS = $(shell find $(SRCS_DIR) -type f -name "*.c")

INCS = $(shell find $(INCS_DIR) -type f -name "*.h")

all: $(NAME)

%.o: $(SRCS_DIR)/%.c $(INCS)
	$(CC) $(CFLAGS) -c $< -I$(INCS_DIR) -o $@

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
