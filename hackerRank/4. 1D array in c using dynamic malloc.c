#include<stdio.h>
#include<stdlib.h>

int main(){

    int input, *arr, i, sum = 0;
    scanf("%d", &input);
    arr = (int*) malloc(input * sizeof(int));
    //read
    for (i= 0; i<input; i++){
        scanf("%d", arr+i);
    }
    //summing and printing
    for (i=0; i < input; i++){
        sum+= *(arr+i);
    }
    printf("%d\n", sum);
    free(arr);
    return 0;

    
}