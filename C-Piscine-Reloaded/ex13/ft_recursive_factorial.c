/*
#include <stdio.h>
#include <stdlib.h>
*/

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
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return (1); // Indicate error
    }

    int number;

    number = atoi(argv[1]);

    int factorial = ft_recursive_factorial(number);

    printf("The factorial of %d is %d\n", number, factorial);

    return (0); // Indicate successful execution
}
*/
