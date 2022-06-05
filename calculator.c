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
    float first_number, second_number;
    char operator_symbol;
    printf("Enter first number: ");
    scanf("%f", &first_number);

    printf("Enter operator: ");
    scanf(" %c", &operator_symbol);

    printf("Enter second number: ");
    scanf("%f", &second_number);

    if (operator_symbol == '+')
    {
        printf("Sum is %0.2f\n", (first_number + second_number));
    }

    if (operator_symbol == '-')
    {
        printf("Difference is %0.2f\n", (first_number - second_number));
    }

    if (operator_symbol == '*')
    {
        printf("Product is %0.2f\n", (first_number * second_number));
    }
}