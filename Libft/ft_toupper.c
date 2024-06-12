#include "libft.h"
#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		argv[1][0] = ft_toupper(argv[1][0]);
		ft_putchar(argv[1][0]);
		ft_putchar('\n');
	}
	return (0);
}
