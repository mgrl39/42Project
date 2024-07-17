```c
#include "libft.h"

/*
 * ft_putchar_fd() writes the character 'c' to the file descriptor 'fd'.
 * It writes exactly 1 byte from the address of 'c' to the file descriptor 'fd'
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
```
