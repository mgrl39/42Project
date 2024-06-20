#include "libft.h"

// ft_tolower function that converts an uppercase letter to lowercase.
// Returns the lowercase equivalent of the input character 'c',
// or the character itself if 'c' is not an uppercase letter.

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
