#include "libft.h"

/* The memcmp() function compares the firsst n bytes of s1 and s2
 * each interpreted a unsigned char.
 * Returns an integeer less than, equal to, or greater than zero.
 * If n is zero, the return value is zero.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
