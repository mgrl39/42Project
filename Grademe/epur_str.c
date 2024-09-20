#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	space;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		space = 0;
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (is_space(argv[1][i]))
				space = 1;
			if (!is_space(argv[1][i]))
			{
				if (space)
					ft_putchar(' ');
				space = 0;
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	ft_putchar(10);
}
