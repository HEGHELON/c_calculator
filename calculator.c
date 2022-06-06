#include <stdio.h>
/**
 * main - Entry Point
 * Description: A simple and functional calculator that adds, subtracts,
 * multiply, divide, remainder, power, simple_interest.
 *
 * Result: Always (0) Success
 */
int main(void)
{
    double first_number, second_number;
    char operator_symbol;
    
    scanf("%lf %c %lf \n", &first_number,&operator_symbol,&second_number);
    
    /* printf("%lf %c %lf \n", first_number, operator_symbol, second_number);*/

    if (operator_symbol == '+')
      {
	printf("Sum is:%g\n", (first_number+ second_number));
      }
    if (operator_symbol == '-')
      {
	printf("Difference is %g\n", (first_number - second_number));
      }
    if (operator_symbol == '*')
      {
	printf("Product is %g\n", (first_number*second_number));
      }
}
