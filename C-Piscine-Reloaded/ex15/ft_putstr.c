#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_putstr("Write something...");
	}
	else
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			if (i != argc - 1)
				ft_putchar(' ');
			i++;
		}
	}	
}
