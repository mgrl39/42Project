```c
#include "libft.h"

/*
 * ft_putnbr_fd() writes the integer 'nb' to the file descriptor 'fd'/
 * If 'nb' is -2147483648, it writes "-2147483648" to 'fd'.
 * Otherwise, it converts 'nb' to its corresponding string respresentation
 * and writes it to 'fd'.
 */

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
```
