#include "libft.h"

/*
 * The strdup() function returns a pointer to a new string which si a duplicate
 * of the string s. Memory for the new string is obtained with malloc(3).
 * On succes, the strdup() function returns a pointer to the duplicated string.
 * It retuns NULL if insufficient memory was available.
 */

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
