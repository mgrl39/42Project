#include <stdlib.h>

char    *ft_strdup(char *src)
{
        int     i;
        char    *dest;

        i = 0;
        while (src[i] != '\0')
                i++;

        dest = malloc(sizeof(char) * (i + 1));
        if (!dest)
                return (NULL);
        i = 0;
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
