//separate odd and even integers in separate arrays
#include <stdio.h>
int main(){
    int arr1[100];
    int arrOdd[100];
    int arrEven[100];

    //take array size
    int size;
    printf("enter array size: ");
    scanf("%d", &size);
    //read array element
    for (int i=0; i<size; i++){
        printf("Enter array element arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    //CHECHING FOR EVEN NUM
    printf("Even Array: \n");
    for(int i = 0; i<size; i++){
        if (arr1[i] % 2 == 0){
            arrEven[i]=arr1[i];
            printf("%d ", arrEven[i]);
        }
    }
    printf("\n");
    //CHECHING FOR ODD NUM
    printf("Odd Array: \n");
    for(int i = 0; i<size; i++){
        if (arr1[i] % 2 != 0){
            arrOdd[i]=arr1[i];
            printf("%d ", arrOdd[i]);
        }
    }

}