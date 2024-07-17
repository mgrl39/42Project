```c
#include "libft.h"

/*
 * ft_memchr() scans the initial 'n' bytes of memory area 's' for the first
 * occurrence of character 'c' (interpreted as unsigned char).
 * Returns a pointer to the matching byte or NULL if 'c' is not found.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
```
