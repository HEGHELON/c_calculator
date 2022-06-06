#include <stdio.h>
#include <math.h>
/**
 * main - Entry Point
 * Description: A simple and functional calculator that adds, subtracts,
 * multiply, divide, remainder, power, simple_interest.
 *
 * Result: Always (0) Success
 */
int main(void)
{
    float first_number,second_number;
    char operator_symbol;
    int count;

    count = 0;

    while (count <= 3){
        printf("Enter first number: ");
        scanf("%f", &first_number);

        char enter;

        printf("Do you want to enter a second number? Y or N: ");
        scanf(" %c", &enter);
        if (enter == 'Y'){
            printf("Enter the operation? ");
            scanf(" %c", &operator_symbol);

            printf("Enter second number: ");
            scanf("%f", &second_number);
       
            if (operator_symbol == '+')
            {
                printf("Sum is %.2f\n", first_number + second_number);
            } else if (operator_symbol == '-')
            {
                printf("Difference is %.2f\n", first_number - second_number);
            } else if (operator_symbol == '*')
            {
                printf("Product is %.2f\n", first_number * second_number);
            } else if (operator_symbol == '/')
            {
                printf("Division is %.2f\n", first_number / second_number);
            } else if (operator_symbol == '%') {
                printf("Reminder is %d\n", (int)first_number % (int)second_number);
            } else if (operator_symbol == '^'){
                int square;
                square = pow(first_number, second_number);
                printf("The power is %d\n", square);
            } else {
                printf("Enter a valid operator!\n");
            }
        } else if (enter == 'N'){

            char operator1;
            printf("Enter the operation to use for the first number? ");
            scanf(" %c", &operator1);
            if (operator1 == 'S'){
                printf("The square of the number is %.2f\n", pow(first_number, 2));
            } else if (operator1 == 'R'){
                printf("The square root of the first number is %.2f\n", sqrt(first_number));
            } else {
                printf("Enter a valid operator!\n");
            }
        } else {
            printf("Please enter a valid answer!");
        }

        count++;

        char again;

        if (count == 3){
            printf("Do you want to use the calculator again?, Y or N: ");
            scanf(" %c", &again);
            if (again == 'Y'){
                count = 0;
            } else {
                printf("Thank you for using this calculator!");
                    break;
            }
        }

    
    }
    return (0);
}