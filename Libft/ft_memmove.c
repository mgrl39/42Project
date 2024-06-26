#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;
	if (dest == src || n == 0)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			p_dest[n] = p_src[n];
		}
	}
	return (dest);
}
