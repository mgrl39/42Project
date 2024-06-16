
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
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

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		mult;
	int		res;

	i = 0;
	res = 0;
	mult = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 56)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * mult);
}

int	main(int argc, char *argv[])
{
    // Verificar el número de argumentos
    if (argc != 4)
    {
        ft_putstr("Error, deben ser 3 argumentos: ./nombreprograma \"String\" 'caracter' numeroDeCambios\n");
        return 1;
    }

    // Verificar la longitud del segundo argumento
    if (ft_strlen(argv[2]) != 1)
    {
        ft_putstr("Error, el segundo argumento debe ser un solo caracter.\n");
        return 1;
    }

    // Convertir el tercer argumento a número
    int num_changes = ft_atoi(argv[3]);
    if (num_changes < 0)
    {
        ft_putstr("Error, el número de cambios debe ser un número positivo.\n");
        return 1;
    }

    // Obtener los argumentos
    char *str = argv[1];
    char c = argv[2][0];

    // Mostrar la cadena original
    ft_putstr("Original string: ");
    ft_putstr(str);
    ft_putchar('\n');

    // Usar ft_memset para modificar la cadena
    ft_memset(str, c, num_changes);

    // Mostrar la cadena modificada
    ft_putstr("Modified string: ");
    ft_putstr(str);
    ft_putchar('\n');

    return 0;
}
