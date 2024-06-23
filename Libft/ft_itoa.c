#include "libft.h"

// Simple: Este incluye una librería con funciones auxiliares.
 // Alto nivel: Esto incluye el archivo de cabecera "libft.h" que probablemente contiene prototipos de funciones y otras definiciones.
 // Necesidad: Es necesario para que el compilador sepa sobre las funciones y macros utilizadas en este archivo.

static int	int_len(int n)
// Simple: Define una función para contar los dígitos de un número.
 // Alto nivel: Esta es una función estática que devuelve la longitud del número entero n en términos de dígitos.
 // Necesidad: La función es estática para restringir su alcance a este archivo y se utiliza para determinar cuántos caracteres se necesitan para representar el número en una cadena.

{
	int	len;  // Simple: Declara una variable para almacenar la longitud del número.
  // Alto nivel: Declara una variable entera que se usará para contar los dígitos del número n.
  // Necesidad: Esta variable es necesaria para contar los dígitos del número entero n.

	len = 0; // Simple: Inicializa la longitud a 0.
 // Alto nivel: Inicializa la variable len a 0 antes de empezar a contar los dígitos.
 // Necesidad: Se debe inicializar para empezar el conteo de los dígitos desde cero.

	if (n == 0) // Simple: Verifica si el número es 0.
  // Alto nivel: Comprueba si n es 0, en cuyo caso la longitud del número es 1.
  // Necesidad: Maneja el caso especial en que el número es 0, que tiene exactamente un dígito.

		return (1); // Simple: Retorna 1 porque 0 tiene un dígito.
  // Alto nivel: Retorna 1 porque el número 0 tiene solo un dígito.
  // Necesidad: Devuelve la longitud correcta para el caso especial cuando n es 0.

	if (n < 0) // Simple: Verifica si el número es negativo.
  // Alto nivel: Comprueba si n es negativo, en cuyo caso incrementa len para contar el signo negativo.
  // Necesidad: Contabiliza el signo negativo como un carácter adicional en la longitud de la cadena.

		len++; // Simple: Aumenta la longitud por el signo negativo.
  // Alto nivel: Incrementa len en 1 para contar el signo negativo.
  // Necesidad: Es necesario porque los números negativos tienen un carácter adicional para el signo menos.

	while (n) // Simple: Repite mientras n no sea 0.
  // Alto nivel: Ejecuta un bucle mientras n no sea cero, para contar todos los dígitos del número.
  // Necesidad: Permite dividir el número en sus dígitos individuales para contar cuántos hay.

	{
		n /= 10; // Simple: Elimina el último dígito del número.
  // Alto nivel: Divide n por 10 para eliminar el último dígito y continuar con el siguiente.
  // Necesidad: Es necesario para procesar el siguiente dígito en la siguiente iteración.

		len++; // Simple: Aumenta la longitud por cada dígito.
  // Alto nivel: Incrementa len en 1 por cada dígito procesado.
  // Necesidad: Cuenta cada dígito del número.

	}
	return (len); // Simple: Retorna la longitud total del número.
  // Alto nivel: Retorna el número total de dígitos más el signo negativo si es necesario.
  // Necesidad: Devuelve el conteo total de caracteres necesarios para representar el número en una cadena.

}

char	*ft_itoa(int n)
// Simple: Convierte un número a cadena.
 // Alto nivel: Esta función convierte un número entero n en una cadena de caracteres.
 // Necesidad: Es una implementación de la función itoa que convierte un entero a una cadena para facilitar su uso en contextos donde se necesita una representación en texto del número.

{
	int		ncpy; // Simple: Declara una copia del número.
  // Alto nivel: Declara una variable para almacenar una copia modificable del número n.
  // Necesidad: Es necesario para manipular el valor absoluto del número sin alterar el original.

	int		i; // Simple: Declara una variable para índices.
  // Alto nivel: Declara una variable entera que se usará como índice para recorrer la cadena.
  // Necesidad: Necesario para almacenar la posición actual en la cadena mientras se construye el resultado.

	char	*str; // Simple: Declara un puntero para la cadena.
  // Alto nivel: Declara un puntero a una cadena de caracteres donde se almacenará la representación en texto del número.
  // Necesidad: Necesario para apuntar a la memoria donde se almacenará la cadena resultante.

	if (n == -2147483648) // Simple: Verifica si el número es el mínimo valor de int.
  // Alto nivel: Comprueba si n es el menor valor representable en un entero con signo de 32 bits.
  // Necesidad: Maneja un caso especial donde la negación del número causaría un desbordamiento.

		return (ft_strdup("-2147483648")); // Simple: Retorna la cadena correspondiente al mínimo int.
  // Alto nivel: Retorna una copia de la cadena que representa el valor -2147483648.
  // Necesidad: Devuelve la cadena correspondiente directamente para evitar problemas de desbordamiento al negarlo.

	ncpy = n; // Simple: Hace una copia del número.
  // Alto nivel: Asigna el valor de n a ncpy.
  // Necesidad: Se usa para trabajar con el valor absoluto del número sin cambiar el original.

	if (n < 0) // Simple: Verifica si el número es negativo.
  // Alto nivel: Comprueba si n es negativo.
  // Necesidad: Se usa para convertir el número a positivo si es negativo.

		ncpy = -n; // Simple: Hace positiva la copia del número.
  // Alto nivel: Asigna el valor absoluto de n a ncpy.
  // Necesidad: Se necesita trabajar con el valor absoluto para construir la cadena sin el signo.

	i = int_len(n); // Simple: Obtiene la longitud del número.
  // Alto nivel: Llama a la función int_len para obtener la longitud de n.
  // Necesidad: Necesario para saber cuánto espacio debe reservarse para la cadena.

	str = malloc(sizeof(char) * (i + 1)); // Simple: Reserva memoria para la cadena.
  // Alto nivel: Reserva memoria suficiente para la cadena resultante, incluyendo el carácter nulo al final.
  // Necesidad: Se necesita reservar espacio en memoria para almacenar la representación en texto del número.

	if (!str) // Simple: Verifica si la reserva de memoria falló.
  // Alto nivel: Comprueba si la asignación de memoria falló.
  // Necesidad: Se asegura de que el puntero str no sea NULL antes de usarlo.

		return (NULL); // Simple: Retorna NULL si la reserva falló.
  // Alto nivel: Retorna NULL para indicar que la asignación de memoria falló.
  // Necesidad: Devuelve NULL en caso de error para evitar el uso de un puntero no válido.

	str[i] = '\0'; // Simple: Agrega el fin de cadena.
  // Alto nivel: Coloca el carácter nulo al final de la cadena.
  // Necesidad: Marca el final de la cadena resultante.

	i--; // Simple: Decrementa el índice.
  // Alto nivel: Decrementa el índice i para empezar a llenar la cadena desde el final.
  // Necesidad: Prepararse para colocar los dígitos del número en la cadena desde la última posición hacia adelante.

	if (ncpy == 0) // Simple: Verifica si la copia del número es 0.
  // Alto nivel: Comprueba si ncpy es 0.
  // Necesidad: Maneja el caso especial en que el número es 0.

		str[i] = '0'; // Simple: Coloca '0' en la cadena.
  // Alto nivel: Coloca el carácter '0' en la cadena.
  // Necesidad: Maneja el caso especial del número 0.

	while (ncpy > 0) // Simple: Repite mientras la copia sea mayor que 0.
  // Alto nivel: Ejecuta un bucle mientras ncpy sea mayor que cero.
  // Necesidad: Para procesar cada dígito del número desde el final hacia el principio.

	{
		str[i--] = (ncpy % 10) + '0'; // Simple: Coloca el último dígito en la cadena.
  // Alto nivel: Obtiene el último dígito de ncpy y lo convierte a carácter, luego lo coloca en str.
  // Necesidad: Construye la representación en texto del número dígito por dígito.

		ncpy /= 10; // Simple: Elimina el último dígito de la copia.
  // Alto nivel: Divide ncpy por 10 para procesar el siguiente dígito.
  // Necesidad: Permite mover al siguiente dígito para procesarlo en la siguiente iteración.

	}

	if (n < 0) // Simple: Verifica si el número original es negativo.
  // Alto nivel: Comprueba si n es negativo.
  // Necesidad: Añade el signo negativo al inicio de la cadena si el número original era negativo.

		str[i] = '-'; // Simple: Coloca el signo negativo en la cadena.
  // Alto nivel: Coloca el carácter '-' al inicio de la cadena.
  // Necesidad: Indica que el número es negativo.

	return (str); // Simple: Retorna la cadena resultante.
  // Alto nivel: Retorna la cadena que representa el número n.
  // Necesidad: Devuelve la cadena resultante para su uso posterior.
}
