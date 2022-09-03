//find the maximum and minimum element in an array
#include <stdio.h>
int main(){
    int arr[100];
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    //read element
    for(int i = 0;i<size; i++){
        printf("enter arr value Arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    //find max and min using if
    int max = arr[0], min = arr[0];
    for(int i = 0; i<size; i++)
    {
            if (arr[i]>max){
                max = arr[i];
            }
            if (arr[i]<min){
                min = arr[i];
            }
    }
    printf("Max element is : %d", max);
    printf("\nMin element is : %d\n", min);
}