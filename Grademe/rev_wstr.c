
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	rev_wstr(char *str)
{
	int		i = 0;
	int		j = 0;
	int		word_start = 0;
	int		word_count = 0;
	char	**words;

	// First, count the number of words
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
			word_count++;
		i++;
	}

	// Allocate memory for storing words
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return;

	// Extract the words and store them
	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			word_start = i;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				i++;
			words[word_count] = (char *)malloc(i - word_start + 1);
			if (!words[word_count])
				return;
			j = 0;
			while (word_start < i)
				words[word_count][j++] = str[word_start++];
			words[word_count][j] = '\0';
			word_count++;
		}
		else
			i++;
	}
	words[word_count] = NULL;

	// Print words in reverse order
	while (--word_count >= 0)
	{
		ft_putstr(words[word_count]);
		if (word_count > 0)
			write(1, " ", 1);
		free(words[word_count]);
	}
	free(words);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
