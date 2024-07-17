```c
#include "libft.h"

/*
 * The strnstr() function locates the first occurrence of the null-terminated
 * string little in the string big,
 * where not more than len characters are searched.
 * Characters that appear after a ‘\0’ char are not searched.
 * If little is an empty string, big is returned; if little occurs nowhere
 * in big, NULL is returned; otherwise a pointer to the first character of the
 * first occurence f little is returned.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big)
		return (0);
	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
```
