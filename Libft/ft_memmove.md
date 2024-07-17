```c
#include "libft.h"

/*
 * ft_memmove() copies 'n' bytes from memory area 'src' to memory area 'dest'.
 * The memory areas may overlap.
 * Returns a pointer to 'dest'.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	if (!dest || !src)
		return (0);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (tmp_src < tmp_dest)
		while (n--)
			tmp_dest[n] = tmp_src[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
```
