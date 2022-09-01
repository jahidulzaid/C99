#include <stdio.h>

int main(){
    int count=0;
    int arr[100];
    //take array size
    printf("Enter aray size: ");
    int arrSize;
    scanf("%d", &arrSize);
    // read element of array
    for (int i = 0; i<arrSize; i++){
        printf("Enter the value arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
  
    //finding duplicate and 
    for (int i = 0; i<arrSize; i++){
        for (int j = i+1;j<arrSize; j++ ){
            if (arr[i]==arr[j]){
                count++;
                break;
            }
        }

    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

}