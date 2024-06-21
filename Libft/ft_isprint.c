#include "libft.h"

// ft_isprint function that checks if a character is a printable character.
// Returns 1 if c is a printable character, 0 otherwise.

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
