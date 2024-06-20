#include "libft.h"

// ft_isalpha function that checks if a character is a digit
// Returns 1 if c is a digit (from 0 to 9), 0 otherwise

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
