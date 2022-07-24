#include <stdio.h>

int main(){
int i=0, num;
printf("Enter a number: ");
scanf("%d", &num);

while(num != 0){
    num /=10;
    i++;
}
printf("%d", i);

}
