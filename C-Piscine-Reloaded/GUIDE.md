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
```
## 15 - ft_putstr
```c
```
## 16 - ft_strlen
```c
```
## 17 - ft_strcmp
```c
```
## 18 - ft_print_params
```c
```
## 19 - ft_sort_params
```c
```
## 20 - ft_strdup
```c
```
## 21 - ft_range
```c
```
## 22 - ft_abs.h
```c
```
## 23 - ft_point.h
```c
```
## 24 - Makefile
```makefile
```
## 25 - ft_foreach
```c
```
## 26 - ft_count_if
```c
```
## 27 - display_file
```c
```
