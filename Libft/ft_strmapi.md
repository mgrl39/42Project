```c
#include "libft.h"

/*
 * ft_strmapi() applies the function 'f' t each ccharacter off the string 's'.
 * The same as ft_striteri() but allocating memory with malloc.
 * Returning a new string.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int				i;
	char						*p;

	p = 0;
	if (!s || !f)
		return (0);
	p = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
```
