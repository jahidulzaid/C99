#include <stdio.h>
int main(){
int num, i = 0;
printf("Enter a Number: ");
scanf("%d", &num);

for (i =1; i<= num; ++i){
    if (num%i == 0){
            //print which num are divisible by i iritation
        printf("%d\n", i);
    }
}
}

