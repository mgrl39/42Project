```c
#include "libft.h"

/*
 * ft_putstr_fd() writes the string 's' to the file descriptor 'fd'.
 * If 's' is NULL, the function returns immediately without performing
 * any action.
 */

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = ft_strlen(s);
	write(fd, s, i);
}
```
