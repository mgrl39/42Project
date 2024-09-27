#include <unistd.h>

int	check_double(char *str, char c, int len)
{
	int i = 0;

	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i, j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!check_double(argv[1], argv[1][i], i))
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
