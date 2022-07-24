#include <stdio.h>

int main(){
int i, sum=0, n;
printf("Enter value of n: ");
scanf("%d", &n);
for (i =1; i<= n; i++)
    sum += i;
printf("Sum of n natural number: %d", sum);
}
