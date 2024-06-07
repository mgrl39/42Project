#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 1)
		return (-1);
	i = 0;
	while (argv[0][i] != '\0')
		i++;
	write(1, &argv[0][0], i);
	write(1, "\n", 1);
	return (0);
}
