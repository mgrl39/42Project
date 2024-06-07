#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	write(1, str, counter);
}
