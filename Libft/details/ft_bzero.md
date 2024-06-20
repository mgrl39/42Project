```c
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	mult;
	int	res;

	i = 0;
	res = 0;
	mult = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * mult);
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		n;
	if (argc != 3)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <string> <number>\n");
		return (1);
	}
	str = argv[1];
	n = ft_atoi(argv[2]);
	ft_bzero(str, n);
	ft_putstr("Resulting string after ft_bzero: ");
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
```
```c
#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>  // para printf

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	mult;
	int	res;

	i = 0;
	res = 0;
	mult = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * mult);
}

// Función para imprimir los bytes en hexadecimal
void	ft_print_hex(const void *ptr, size_t size)
{
	size_t	i;
	const unsigned char	*p = (const unsigned char *)ptr;

	i = 0;
	while (i < size)
	{
		printf("%02x ", p[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char *argv[])
{
	char	*str;
	int	n;

	if (argc != 3)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <string> <number>\n");
		return (1);
	}

	str = argv[1];
	n = ft_atoi(argv[2]);

	ft_putstr("Original string: ");
	ft_putstr(str);
	ft_putchar('\n');

	ft_putstr("Original string in hex: ");
	ft_print_hex(str, 20);  // Imprimir los primeros 20 bytes para ver el contenido

	ft_bzero(str, n);

	ft_putstr("Resulting string after ft_bzero: ");
	ft_putstr(str);
	ft_putchar('\n');

	ft_putstr("Resulting string in hex: ");
	ft_print_hex(str, 20);  // Imprimir los primeros 20 bytes para ver el contenido

	return (0);
}
```
