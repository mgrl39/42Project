#include "libft.h"

/*
 * The  strcmp()  function  compares the two strings s1 and s2.
 * The comparison is done using  unsigned characters.
 * The strncmp() function is similar to strcmp(), except it compares
 * only the first (at most) n bytes of s1 and s2.
 * Return an integer less than, equal, or greather than 0.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}
