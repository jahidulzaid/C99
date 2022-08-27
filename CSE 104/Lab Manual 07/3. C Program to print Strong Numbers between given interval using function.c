#include <stdio.h>
void strong_number(int n1, int n2);

int main(){
    int n1, n2;
    printf("Enter the starting number: ");
    scanf("%d", &n1);
    printf("Enter the ending number: ");
    scanf("%d", &n2);
    strong_number(n1, n2);
    return 0;
}
void strong_number(int n1, int n2){
    int i, j, sum = 0, temp;
    for(i = n1; i <= n2; i++){
        temp = i;
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(i == sum){
            printf("%d ", i);
        }
        sum = 0;
    }
}