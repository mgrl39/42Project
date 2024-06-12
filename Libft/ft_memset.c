#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr = str; // Convertimos el puntero a unsigned char
    size_t i = 0; // Inicializamos un contador
    
    while (i < n)
    {
        ptr[i] = (unsigned char)c; // Asignamos el valor c a cada byte
        i++; // Incrementamos el contador
    }
    
    return str; // Devolvemos el puntero original
}
