#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 65 && str[count] <= 90))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
