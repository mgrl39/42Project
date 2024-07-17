```c
#include "libft.h"

/*
 * ft_strlen() function that calculates the length of a string.
 * Returns a number of characters in the string str excluding 
 * the null terminator '\0'.
 */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
```
