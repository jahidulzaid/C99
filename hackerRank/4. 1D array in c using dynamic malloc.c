#include<stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    char arr[input];
    int arrValue, sum = 0;
    //read value
    for (int i = 0; i < input; i++)
    {   
        arr[i] = scanf("%d", &arrValue);
        sum = sum + arrValue;
    }
    printf("%d\n", sum);

    
}