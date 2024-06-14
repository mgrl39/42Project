The same ft_ft but wih other main...
```c
#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
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
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	mult;
	int	res;

	i = 0;
	res = 0;
	mult = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 &&  nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 56)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * mult);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	length;

	if (argc != 2)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <number>\n");
		return (1);
	}
	length = 0;
	a = ft_atoi(argv[1]);
	ft_putstr("The first value is: ");
	ft_putnbr(a);
	ft_putchar('\n');
	
	ft_ft(&a);
	ft_putstr("Before ft_ft, the value is: ");
	ft_putnbr(a);
	ft_putchar('\n');
	
	return (0);
}
```
