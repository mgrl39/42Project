#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return (1);
    }

    char *source = argv[1];
    char *duplicate;

    duplicate = ft_strdup(source);
    if (duplicate == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    printf("Original: %s\n", source);
    printf("Duplicate: %s\n", duplicate);

    free(duplicate);  // Don't forget to free the allocated memory
    return (0);
}

char *ft_strdup(char *src)
{
    int i;
    char *dest;

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
