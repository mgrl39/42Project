#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		n;

	if (argc != 3)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <string> <number>\n");
		return (1);
	}
	str = argv[1];
	n = ft_atoi(argv[2]);
	ft_bzero(str, n);
	ft_putstr("Resulting string after ft_bzero: ");
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
