#include "libft.h"

// https://github.com/appinha/42cursus-00-Libft/blob/master/subm1/ft_strnstr.c

/*
 * !*little: Verifica si little es una cadena vacía utilizando !*little, que es una forma común de verificar si el primer carácter de little es '\0'.
 * !little: Verifica si little es NULL, lo cual también indica que little es una cadena vacía o no se ha proporcionado.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && \
				big[i + j] == little[j] && ((i + j) < len))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little)
		return (big);
	while (big[i] != '\0' && i < len)
	{
		i++;

	}
	return (NULL);
}
*/

int	main(void)
{
	const char	*largestring;
	const char	*smallstring;
	char		*ptr;
	char		*another_ptr;

	largestring = "Foo Bar Baz";
	smallstring = "Bar";
	ptr = strnstr(largestring, smallstring, 4);
	another_ptr = ft_strnstr(largestring, smallstring, 4);
}
