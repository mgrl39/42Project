#include "libft.h"
#include "libft.h"

// ft_isalpha function that checks if a character is alphabetic
// Returns 1 if c is a letter (either uppercase or lowercase), 0 otherwise
int     ft_isalpha(int c)
{
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
 * The same functionality can be achieved using an if statement, as shown below:
 *
 * int ft_isalpha(int c) {
 *     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
 *         return (1);
 *     return (0);
 * }
 *
 * In this version, the boolean expression is evaluated inside the if statement.
 * If the expression is true, it returns 1. If the expression is false, it returns 0.
 * The end result is the same as the version that directly returns the boolean expression.
 */

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
	if (ft_isalpha(argv[1][0]))
		ft_putstr("Is a letter\n");
	else
		ft_putstr("Is not a letter\n");
	return (0);
}
