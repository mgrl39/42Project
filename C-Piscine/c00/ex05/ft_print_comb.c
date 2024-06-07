#include <unistd.h>

void	ft_putchar(char i1, char i2, char i3)
{
	write(1, &i1, 1);
	write(1, &i2, 1);
	write(1, &i3, 1);
	if (i1 != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = x + 1;
	z = y + 1;
	while (x < 8)
	{
		y = x + 1;
		while (y < 9)
		{
			z = y + 1;
			while (z < 10)
			{
				if (x < y && y < z)
				{
					ft_putchar(x + '0', y + '0', z + '0');
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
