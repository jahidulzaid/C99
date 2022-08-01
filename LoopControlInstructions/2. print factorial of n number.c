#include <stdio.h>

int main(){
    int n, fact = 1;
    printf("Enter a num: ");
    scanf("%d", &n);
    for (int i=1; i<= n; i++){
        fact *=i;
        printf("Factorial of %d is %d\n",i, fact);
    }

    return 0;
}