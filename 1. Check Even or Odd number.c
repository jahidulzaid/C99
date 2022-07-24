#include <stdio.h>
int main(){
    int n;
    printf("Enter an integer Number to check even or odd: ");
    scanf("%d", &n);
    if (n%2 == 0)
        printf("The number is Even");
    else
        printf("\nThe number is Odd.");
    return 0;
    }
