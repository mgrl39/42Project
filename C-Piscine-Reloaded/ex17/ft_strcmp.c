#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	
	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	return (s1[count]-s2[count]);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
        	fprintf(stderr, "Usage: %s <word1> <word2>\n", argv[0]);
		return (1);
	}

	int comparison_result = ft_strcmp(argv[1], argv[2]);

	if (comparison_result > 0)
		printf("%s is lexicographically greater than %s\n", argv[1], argv[2]);
	else if (comparison_result == 0)
		printf("%s is equal to %s\n", argv[1], argv[2]);
	else
		printf("%s is lexicogarphically less than %s\n", argv[1], argv[2]);

	return (0);
}
