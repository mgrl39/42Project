```c
#include "libft.h"

/*
 * The strlcpy() function copies up to (size - 1) characters from the
 * NUL-terminated string src to dst, NUL-terminating the result.
 * It returns the total length of the string they tried to create.
 * For ft_strlcpy() that means the length of src
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
```
