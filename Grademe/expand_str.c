#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(int c)
{
	return (c <= 32);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	space;

	if (argc == 2)
	{
		i = 0;
		space = 0;
		while (ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (ft_isspace(argv[1][i]))
				space = 1;
			if (!ft_isspace(argv[1][i]))
			{
				if (space)
					write(1, "   ", 3);
				space = 0;
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	ft_putchar(10);
}
