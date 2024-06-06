#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main(void) {
  int num1 = 10; // Predefined number 1
  int num2 = 2;  // Predefined number 2
  int result_div, result_mod;

  // Check for division by zero
  if (num2 == 0) {
    printf("Error: Division by zero!\n");
    return (1); // Indicate error
  }

  // Call ft_div_mod to perform division and modulo
  ft_div_mod(num1, num2, &result_div, &result_mod);

  // Print the results
  printf("The quotient of %d divided by %d is %d\n", num1, num2, result_div);
  printf("The remainder of %d divided by %d is %d\n", num1, num2, result_mod);

  return (0); // Indicate successful execution
}
