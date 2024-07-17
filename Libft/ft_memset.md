```c
#include "libft.h"

/*
 * ft_memset() function that checks the first n bytes of the memory area pointed
 * to by s with thee constant byte c.
 * Returns a poitner to the memory area s.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp_s;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (i < n)
	{
		tmp_s[i] = (unsigned char)c;
		i++;
	}
	return (tmp_s);
}
```
