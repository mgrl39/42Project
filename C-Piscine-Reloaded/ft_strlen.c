#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[]) {
	int	string_length;
	
	if (argc < 2)
	{
		printf("Write something...");
	}
	else
	{
		string_length = ft_strlen(argv[1]);
		printf("String: %s\n", argv[1]);
		printf("Length of the string: %d\n", string_length);
	}
  	return (0);
}
