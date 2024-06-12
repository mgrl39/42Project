#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		argv[1][0] = ft_tolower(argv[1][0]);
		ft_putchar(argv[1][0]);
		ft_putchar('\n');
	}
	return (0);
}
