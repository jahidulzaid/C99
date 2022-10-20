#include<stdio.h>
#include<stdlib.h>

int main(){

    int input, *arr, i;
    scanf("%d", &input);
    arr = (int*) malloc(input * sizeof(int));
    //read
    for (i= 0; i<input; i++){
        scanf("%d", arr+i);
    }
    //summing anf printing
    for (i=input; i > 0; i--){
        printf("%d ", arr[i-1]);
    }
    
    free(arr);
    return 0;

    
}