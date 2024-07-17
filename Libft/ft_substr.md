```c
#include "libft.h"

/*
 * ft_substr() allocates and returns a substring from the string 's'.
 * The substring begins at index 'start' and has maximum length 'len'.
 * If 's' is NULL, the function returns NULL.
 * If 'start' is beyond the end of 's', the function returns an empty string.
 * The allocated substring is NULL-terminated.
 * Returns the allocated substring, or NULL if allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
```
