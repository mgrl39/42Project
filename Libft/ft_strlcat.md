```c
#include "libft.h"

/*
 * ft_strlcat() funciton that concatenates src to dst ensuring NUL-termination 
 * and returns the total length of the string it tried to create
 * (initial length of dst + length of src).
 * It prevents buffer overruns by limiting the concatenation 
 * to size - 1 characters.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (dst_len + src_len);
}
```
