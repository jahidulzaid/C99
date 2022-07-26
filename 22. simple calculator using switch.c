#include <stdio.h>
int main(){
char op;
float num1, num2, result;
printf("Enter a Operator (i.e: + - * / ): ");
scanf("%c", &op);

switch( op ){
case '+':
    printf("\nYou selected %c\n", op);
    printf("\nEnter two number using space: ");
    scanf("%f %f", &num1, &num2);
    result = num1+num2;
    printf("\n%2.2f %c %2.2f number is: %2.2f\n", num1, op, num2, result);
    break;
case '-':
    printf("\nYou selected %c\n", op);
    printf("\nEnter two number using space: ");
    scanf("%f %f", &num1, &num2);
    result = num1-num2;
    printf("\n%2.2f %c %2.2f number is: %2.2f\n", num1, op, num2, result);
    break;
case '*':
    printf("\nYou selected %c\n", op);
    printf("\nEnter two number using space: ");
    scanf("%f %f", &num1, &num2);
    result = num1*num2;
    printf("\n%2.2f %c %.2f number is: %.2f\n", num1, op, num2, result);
    break;
case '/':
    printf("\nYou selected %c\n", op);
    printf("\nEnter two number using space: ");
    scanf("%f %f", &num1, &num2);
    result = num1/num2;
    printf("\n%2.2f %c %2.2f number is: %2.2f\n", num1, op, num2, result);
    break;
}

}

