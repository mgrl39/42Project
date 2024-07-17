```c
#include "libft.h"

/*
 * ft_putendl_fd() writes the string 's' to the file descriptor 'fd',
 * followed by a newline character '\n'.
 * If 's' is NULL, only the newline character '\n' is written to 'fd'.
 */

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
```
