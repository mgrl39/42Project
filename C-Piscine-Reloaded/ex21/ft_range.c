/*
#include <stdlib.h>
#include <stdio.h>
*/

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*
// Main function to test ft_range with command line arguments
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <min> <max>\n", argv[0]);
        return 1;
    }

    int min = atoi(argv[1]); // Convert the first argument to an integer
    int max = atoi(argv[2]); // Convert the second argument to an integer

    // Call ft_range
    int *result = ft_range(min, max);

    // Display the results
    if (result != NULL) {
        printf("Result of ft_range(%d, %d):\n", min, max);
        for (int i = 0; i < (max - min); i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        // Free the memory
        free(result);
    } else {
        printf("Failed to create the array.\n");
    }

    return 0;
}
*/
