#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
		{
			if (!(str[count] >= 'a' && str[count] <= 'z'))
			{
				return (0);
			}
		}
		count++;
	}
	return (1);
}
