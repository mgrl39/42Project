#include "libft.h"

int ft_memcmp(void const *s1, void const *s2, size_t n)
{
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;
    size_t i = 0; // Contador
    
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        
        i++;
    }
    return (0);
}
