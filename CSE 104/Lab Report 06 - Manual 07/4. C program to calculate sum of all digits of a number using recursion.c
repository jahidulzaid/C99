#include <stdio.h>
int sumCalculate(int num1);

int main(){
    int num1;
    printf("Enter starting point: ");
    scanf("%d", &num1);
    printf("%d\n", sumCalculate(num1));
    return 0;
}
int sumCalculate(int num1){
    if (num1 != 0){
        return num1 + sumCalculate(num1-1);
    }
    else{
        return 0;
}
}