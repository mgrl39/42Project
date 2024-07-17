```c
#include "libft.h"

// ft_isascii function that checks if a character is an ASCII character.
// Returns 1 if c is an ASCII character, 0 otherwise.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
```
