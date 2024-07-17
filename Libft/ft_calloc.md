```c
#include "libft.h"

/*
 * The ft_calloc() function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero. If size is 0, then ft_calloc() returns either NULL.
 * An integer overflow would not be detected in the following call to malloc().
 * so an incorrectly sized block of memory would be allocated.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
```
