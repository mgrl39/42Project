```c
#include "libft.h"

/*
 * ft_bzero() function erases the data in the n bytes o the memory
 * starting at the location pointed to by s by writing zeeros to that area.
 */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (i < n)
	{
		tmp_s[i] = '\0';
		i++;
	}
}
```
