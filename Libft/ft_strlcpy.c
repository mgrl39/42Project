#include "libft.h"

#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}


int	main(void)
{
	char *str1;
	char *str2;
	size_t size;

	str1 = "Buenos";
	str2 = "Dias";
	size = 3;
	size_t value = strlcpy(str1, str2, size);
	ft_putnbr(value);
}
size_t	strlcpy(char *dest, const char *src, size_t size)
{

}
