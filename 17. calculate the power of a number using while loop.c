#include <stdio.h>

int main(){
int pow,base, result=1.0;
printf("Enter base number: ");
scanf("%d", &base);
printf("Enter power number: ");
scanf("%d", &pow);
while(pow != 0){
    result *= base;
    --pow;
}
printf("%d", result);

}
