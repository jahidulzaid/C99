#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter 3 Number using space to find the largest among them: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    (num1>num2)? (num1> num3 ? printf("%d is the largest.\n", num1): printf("%d is the largest.\n", num3)): (num2> num3? printf("%d is the largest.\n", num2): printf("%d is the largest.\n", num3));
    return 0;
    }

