NAME = ft_display_file
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
