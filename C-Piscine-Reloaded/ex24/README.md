Create the Makefile that’ll compile your `libft.a`.
- The Makefile will get its source files from the "srcs" directory.
- The Makefile will get its header files from the "includes" directory.
- The lib will be at the root of the exercise.
- The Makefile should also implement the following rules: clean, fclean and re as well as all.
- fclean does the equivalent of a make clean and also erases the binary created during the make. re does the equivalent of a make fclean followed by a make.
- We’ll only fetch your Makefile and test it with our files. For this exercise, only the following 5 mandatory functions of your lib have to be handled : (ft_putchar, ft_putstr, ft_strcmp, ft_strlen and ft_swap)

> [!IMPORTANT]  
> This Makefile includes comments, but I've sent you a version without them. You can find it here: [Makefile](Makefile)
```Makefile
# Define compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Define library name
NAME = libft.a

# Define source and header directories
SRCS_DIR = srcs
INCS_DIR = includes

# Define object files pattern
OBJS = $(SRCS:$(SRCS_DIR)/%.c=%.o)

# Define all source files
SRCS = $(shell find $(SRCS_DIR) -type f -name "*.c")

# Define all header files
INCS = $(shell find $(INCS_DIR) -type f -name "*.h")

# Main rule to build the library
all: $(NAME)

# Rule to compile a single source file
%.o: $(SRCS_DIR)/%.c $(INCS)
    $(CC) $(CFLAGS) -c $< -I$(INCS_DIR) -o $@

# Rule to build the library archive
$(NAME): $(OBJS)
    ar rcs $@ $(OBJS)

# Rule to clean object files
clean:
    rm -f $(OBJS)

# Rule to clean object and binary files (fclean)
fclean: clean
    rm -f $(NAME)

# Rule to rebuild everything (re)
re: fclean all

# Don't delete intermediate files (phony target)
.PHONY: all clean fclean re
```

**It defines the necessary variables:**

* Compiler and flags (`CC`, `CFLAGS`)
* Library name (`NAME`)
* Source and header directories (`SRCS_DIR`, `INCS_DIR`)
* Object file pattern (`OBJS`)
* Source and header file lists (`SRCS`, `INCS`)

**It implements the requested rules:**

* `all`: Builds the library (libft.a).
* `%.o`: Compiles individual source files.
* `$(NAME)`: Builds the library archive from object files.
* `clean`: Removes object files.
* `fclean`: Removes both object files and the library archive.
* `re`: Rebuilds everything (fclean followed by all).
* `.PHONY`: Makes clean, fclean, and re phony targets.

**Additional Notes:**

* You can refer to the provided Makefile tutorial ([https://makefiletutorial.com/](https://makefiletutorial.com/)) for a deeper understanding of Makefiles.
