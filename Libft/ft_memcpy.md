```c
#include "libft.h"

/*
 * The memcpy() function copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 * The memcpy() function returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;
	size_t				i;

	if (!dest && !src)
		return (0);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
```
