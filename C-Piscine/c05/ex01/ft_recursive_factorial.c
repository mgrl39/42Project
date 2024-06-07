#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
int main()
{
    int number = 5;
    int factorial = ft_recursive_factorial(number);
    printf("El factorial de %d es: %d\n", number, factorial);
    return 0;
}
*/
