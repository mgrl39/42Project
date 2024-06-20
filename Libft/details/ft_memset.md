```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp_s;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (i < n)
	{
		tmp_s[i] = c;
		i++;
	}
	return (tmp_s);
}

void	ft_print_result(char *str, char c, int number_changes)
{
	ft_putstr("Original string: ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_memset(str, c, number_changes);
	ft_putstr("Modified string: ");
	ft_putstr(str);
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int		num_changes;
	char	*str;
	char	c;

	if (argc != 4)
	{
		ft_putstr("Error, deben ser 3 argumentos:\n");
		ft_putstr("./nombreprograma \"String\" 'caracter' numeroDeCambios\n");
		return (1);
	}
	if (ft_strlen(argv[2]) != 1)
	{
		ft_putstr("Error, el segundo argumento debe ser un solo caracter.\n");
		return (1);
	}
	num_changes = ft_atoi(argv[3]);
	if (num_changes < 0)
	{
		ft_putstr("Error, el número de cambios debe ser un número positivo.\n");
		return (1);
	}
	str = argv[1];
	c = argv[2][0];
	ft_print_result(str, c, num_changes);
	return (0);
}
```
