```c

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(str);
	while (j < i)
	{
		ft_putchar(str[j]);
		j++;
	}
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
	if (ft_isdigit(argv[1][0]))
		ft_putstr("Is a digit\n");
	else
		ft_putstr("Is not a digit\n");
	return (0);
}
```
