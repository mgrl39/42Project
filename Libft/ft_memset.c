#include "libft.h"

// ft_memset function fills the firsst n bytes of the memory area pointed to
// by s with the constant byte c.
// Returns a pointer to the memory area s.

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp_s;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (i < n)
	{
		tmp_s[i] = c;
		i++;
	}
	return (tmp_s);
}
