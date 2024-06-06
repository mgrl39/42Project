#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	char ch = 'a';
	int x = 10;
	int y = 20;
	
	printf("x = %d\ny = %d\n", x, y);
	ft_swap(&x, &y);
	printf("SWAP\n");
	printf("x = %d\ny = %d\n", x, y);
	return (0);
}
*/
