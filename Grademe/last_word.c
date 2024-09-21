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
	int	last_space;

	if (argc == 2)
	{
		i = 0;
		last_space = 0;
		while (argv[1][i])
		{
			if (ft_isspace(argv[1][i]) && !ft_isspace(argv[1][i + 1]) && argv[1][i + 1])
				last_space = i;
			i++;
		}
		while (argv[1][last_space])
		{
			if (!ft_isspace(argv[1][last_space]))
				ft_putchar(argv[1][last_space]);
			last_space++;
		}
	}
	ft_putchar(10);
}
