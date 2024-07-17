```c

#include "libft.h"

/*
 * The ft_memcmp() function compares the first n bytes of s1 and s2
 * each interpreted a unsigned char (to handle correctly the
 * ASCII values without being interpreted as negative).
 * Returns an integer less than, equal to, or greater than zero.
 * If n is zero, the return value is zero.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	if (!s1 || !s2)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	return (0);
}
```
