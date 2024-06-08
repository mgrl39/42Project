/*
#include <stdio.h>
#include <stdlib.h>
*/

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 0;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

/*
int	main(int argc, char *argv[])
{
    int number, result;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return (1); // Indicate error
    }

    number = atoi(argv[1]);
    if (number < 0) {
        printf("Square root is not defined for negative numbers.\n");
        return (1); // Indicate error
    }

    result = ft_sqrt(number);

    if (result == 0) {
        printf("The number %d is not a perfect square.\n", number);
    } else {
        printf("The square root of %d is %d\n", number, result);
    }

    return (0); // Indicate successful execution
}
*/
