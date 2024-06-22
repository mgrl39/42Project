#include "libft.h"

/*
 * The strlcpy() function copies up to (size - 1) characters from the
 * NUL-terminated string src to dst, NUL-terminating the result.
 * It returns the total length of the string they tried to create.
 * For ft_strlcpy() that means the length of src
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	if (!dst || !src)
		return (0);
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
