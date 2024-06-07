#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 97 && str[count] <= 122))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
