#include <unistd.h>
int	ft_atoi(const char *nptr)
{
	int	i;
	int	mult;
	int	num;

	i = 0;
	num = 0;
	mult = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			mult = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		num = (num * 10) + nptr[i++] - 48;
	return (num * mult);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -214748648)
		ft_putstr("-2147483648");
	else if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = ft_atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(number);
			ft_putstr(" = ");
			ft_putnbr(number * i);
			if (i != 9)
				ft_putchar(10);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
