#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s;
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
