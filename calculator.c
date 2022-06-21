#include <stdio.h>
#include "stdop.h"
/**
 * main - Entry Point
 * Description: A simple and functional calculator that adds, subtracts,
 * multiply, divide, remainder, power, simple_interest.
 *
 * Result: Always (0) Success
 */

int main(void)
{
    float first_number;
    char operator_symbol;
    int count;

    count = 0;

    while (count <= 3){
        printf("Enter first number: ");
        scanf("%f", &first_number);


        printf("Enter the operation? ");
        scanf(" %c", &operator_symbol);

          
        if (operator_symbol == '+')
            printf("%.2f\n", add(&first_number));
        else if (operator_symbol == '-')
            printf("%.2f\n", subtract(&first_number));
        else if (operator_symbol == '*')
            printf("%.2f\n", mult(&first_number));
        else if (operator_symbol == '^')
            printf("%.2f\n", power(&first_number));
        else if (operator_symbol == '%')
            printf("%d\n", reminder(&first_number));
        else if (operator_symbol == '/')
            printf("%.2f\n", div(&first_number));
        else if (operator_symbol == 'S')
            printf("%.2f\n", square_single(&first_number));
        else if (operator_symbol == 'R')
            printf("%.2f\n", square_root(&first_number));
        else
            printf("Enter a valid operator!\n");

        count++;

        char again;
        if (count == 3){
            printf("Do you want to play again?, Y or N ");
            scanf(" %c", &again);
            if (again == 'Y'){
                count = 0;
            }else{
                printf("Thank you for using the calculator!");
                break;
            }

        }


    
    }
    return (0);
}
