#include <stdio.h>

int main(){
long int count=0, num;
printf("Enter an integer num: ");
scanf("%ld", &num);
do {
    num /= 10;
    count++;
} while (num!=0);
printf("%d", count);
}
