```c
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putstr(argv[0]);
		ft_putstr(" <character>\n");
		return (1);
	}
	if (ft_strlen(argv[1]) > 1)
	{
		ft_putstr("Error, only one character\n");
		return (1);
	}
	if (ft_isprint(argv[1][0]))
		ft_putstr("Is a printable character\n");
	else
		ft_putstr("Is not a printable character\n");
	return (0);
}
```
