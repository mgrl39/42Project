#include "libft.h"

// ft_toupper function that converts a lowercase letter to uppercase.
// Returns the uppercase equivalent of the input character 'c',
// or the character itself if 'c' is not a lowercase letter.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
