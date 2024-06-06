#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;

	a = 32;
	ft_ft(&a);
	printf("El valor de la variable es: %d\n", a);
	return (0);
}
