size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	i = 0;
	while (dst[len_dst] != '\0')
		len_dest++;
	while (dst[len_src] != '\0')
		len_src++;
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		len_src += size;
	else
		len_src += len_dst;
	while (src[i] != '\0' && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (len_src);
}
