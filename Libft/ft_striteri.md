```c
#include "libft.h"

/*
 * ft_striteri() applies the function 'f' to each chaaracter of the string
 * passsing its index as thef irst argument to 'f'.
 * If 's' is NULL, the function returns immediately. 
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
```
