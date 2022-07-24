#include <stdio.h>
int main(){

int num;
printf("enter a any int number: ");
scanf("%d", &num);
if (num >= 0)
    printf("%d is a positvie number.\n", num);
else
    printf("%d is a negative number.\n", num);


}
