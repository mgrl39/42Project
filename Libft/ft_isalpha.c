#include "libft.h"

// ft_isalpha function that checks if a character is alphabetic
// Returns 1 if c is a letter (either uppercase or lowercase), 0 otherwise

int     ft_isalpha(int c)
{
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
