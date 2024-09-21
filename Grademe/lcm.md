unsigned int    lcm(unsigned int a, unsigned int b)

\[
LCM(a, b) = \frac{|a \times b|}{MCD(a, b)}
\]

Donde \(MCD(a, b)\) es el máximo común divisor de \(a\) y \(b\), y \(|a \times b|\) es el valor absoluto del producto de \(a\) y \(b\).

Aquí está la implementación en C:

```c
unsigned int    gcd(unsigned int a, unsigned int b)
{
    while (b != 0)
    {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a * b) / gcd(a, b);
}
```

### Explicación:
1. La función `gcd` calcula el MCD utilizando el algoritmo de Euclides, que es eficiente para encontrar el máximo común divisor.
2. La función `lcm` primero verifica si uno de los números es cero (si es así, retorna 0 porque el MCM de cualquier número con 0 es 0).
3. Si ambos números son no nulos, calcula el MCM usando la fórmula mencionada.

### Prueba:
Puedes probar la función con diferentes valores para ver si funciona correctamente:

```c
#include <stdio.h>

int main() {
    unsigned int a = 12, b = 18;
    printf("LCM of %u and %u is %u\n", a, b, lcm(a, b));
    return 0;
}
```

Este código calculará el MCM de 12 y 18, que es 36.
