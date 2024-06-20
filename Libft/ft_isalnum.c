#include "libft.h"

// ft_isalnum function that checks if a character is alphabetic or a digit.
// Returns 1 if c is a letter (uppercase or lowercase) or digit, 0 otherwise.

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}
