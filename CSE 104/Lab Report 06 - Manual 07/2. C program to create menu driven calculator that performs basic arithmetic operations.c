#include <stdio.h>
//basic arithmetic operations function
void basic_arithmetic_operations()
{
    int choice, a, b;
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("\nSum = %d", a + b);
        break;
    case 2:
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("\nDifference = %d", a - b);
        break;
    case 3:
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("\nProduct = %d", a * b);
        break;
    case 4:
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("\nQuotient = %d", a / b);
        break;
    case 5:
        printf("\nExiting...\n");
        break;
    default:
        printf("\nInvalid choice.\n");
    }
}  //end of function
int main()
{
    int choice;
    printf("This is a simple calculator that performs basic arithmetic operations.\n");
    do
    {
        printf("\n1. Basic Arithmetic Operations\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            basic_arithmetic_operations();
            break;
        case 2:
            printf("\nExiting...\n");
            break;
        default:
            printf("\nInvalid choice.\n");
        }
    } while (choice != 2);
    return 0;
}  //end of main function   