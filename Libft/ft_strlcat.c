#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		len_src += size;
	else
		len_src += len_dest;
	while (src[i] != '\0' && (len_dest + 1) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src);
}

/*
#include "libft.h"

// nns si esta acabado mirar gihtub.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	i = 0;
	while (dst[len_dst] != '\0')
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dst)
		return (len_src + size);
	while (src[i] != '\0' && (len_dst + i + 1) < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst + i < size)
		dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
*/
