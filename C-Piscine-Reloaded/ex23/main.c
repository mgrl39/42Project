#include "ft_point.h"

void  set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}

int main(void)
{
  t_point point;
  set_point(&point);
  return (0);
}

// Main with ft_putnbr.c and putchar.c to test
/* 

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int main()
{
	t_point point;

	set_point(&point);
	
	ft_putnbr(point.x);
	ft_putchar('\0');
	ft_putnbr(point.y);
	return 0;
}
*/
