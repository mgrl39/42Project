```c

#include "libft.h"

/*
 * ft_itoa() function converts an integer value to a null-terminator string.
 * It allocates memory for the string, which must be freed by the caller.
 * The memory allocation is necessary to initialize the string that will sotre
 * the result of the integer to string conversion. 
 */

static int	count_char(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	long int		nlong;

	nlong = n;
	len = count_char(n);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nlong = -nlong;
	}
	while (nlong != 0)
	{
		str[--len] = nlong % 10 + '0';
		nlong = nlong / 10;
	}
	return (str);
}
```
