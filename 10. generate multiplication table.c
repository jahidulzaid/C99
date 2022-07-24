#include <stdio.h>
int main(){

int i, j, num, multiplicaion=1;
printf("Enter a num to multiplication: ");
scanf("%d", &num);
for(i=1; i<= 10; i++)
    {
        multiplicaion = i * num;
        printf("\n\t%d \t* \t%d \t= \t%d\n", num, i, multiplicaion);
    }

}
