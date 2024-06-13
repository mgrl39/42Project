## 00 - Oh yeah, mooore...
```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0 && echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1 && mkdir test2 && chmod 504 test2 && touch -t 06012245 test2 && echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3 && echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4 && ln test3 test5 && ln -s test0 test6 && touch -ht 06012220 test6 && ls -l
```
```shell
tar -cf exo.tar * && rm -rf test*
```
## 01 - Z
```shell
echo "Z" > z
```
## 02 - clean
```shell
#!/bin/sh

find . -type f -name "*~" -delete -print -o -name "#*#" -delete -print
```
## 03 - find_sh
```shell
#!/bin/sh

find . -type f -name '*.sh' | sed -e 's/\.sh//' | rev | cut -d / -f 1 | rev
```
## 04 - MAC
```shell
#!/bin/sh

ifconfig | grep ether | awk '{print $2}'
```
## 05 - Can you create it ?
```shell
echo -n "42" > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
```
## 06 - ft_print_alphabet
```c
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
```
## 07 - ft_print_numbers
```c
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	number;

	number = 0;
	while (number <= 9)
	{
		ft_putchar(number + 48);
		number++;
	}
}
```
## 08 - ft_is_negative
```c
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
```
## 09 - ft_ft
```c
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
```
## 10 - ft_swap
```c
void	ft_putchar(char c);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
```
## 11 - ft_div_mod
```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
```
## 12 - ft_iterative_factorial
```c
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
```
## 13 - ft_recursive_factorial
```c
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
```
## 14 - ft_sqrt
```c
int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 0;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
```
## 15 - ft_putstr
```c
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
```
## 16 - ft_strlen
```c
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
```
## 17 - ft_strcmp
```c
int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}
```
## 18 - ft_print_params
```c
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
```
## 19 - ft_sort_params
```c
void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
```
## 20 - ft_strdup
```c
char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
```
## 21 - ft_range
```c
int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
```
## 22 - ft_abs.h
```c
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif
```
## 23 - ft_point.h
```c
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif
```
## 24 - Makefile
```makefile
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
```
## 25 - ft_foreach
```c
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
```
## 26 - ft_count_if
```c
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
```
## 27 - display_file
```c
#include <unistd.h>
#include <fcntl.h>

void	display(char *filename)
{
	int		file;
	char	character;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &character, 1))
		write(1, &character, 1);
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
```
