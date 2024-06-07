unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		len_src += size;
	else
		len_src += len_dest;
	while (src[i] != '\0' && (len_dest + i) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src);
}
