#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 48 && str[count] <= 57))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
