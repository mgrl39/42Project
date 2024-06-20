#include "libft.h"

/*
 * ft_bzero() function erases the data in the n bytes of the memory
 * starting at the location pointed to by s by writing zeros to that area.
 */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
