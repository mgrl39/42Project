#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			mult = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		num = (num * 10) + nptr[i++] - 48;
	return (num * mult);
}

void	put_hex(int nbr)
{
	char	*digits = "0123456789abcdef";
	
	if (nbr >= 16)
		put_hex(nbr / 16);
	nbr = digits[nbr % 16];
	write(1, &nbr, 1);
}
int	main(int argc, char *argv[])
{
	int	number;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		put_hex(number);
	}
	ft_putchar(10);
	return (0);
}
