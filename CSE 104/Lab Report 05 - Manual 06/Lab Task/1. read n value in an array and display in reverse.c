#include <stdio.h>

int main(){
    int arr[100];
    //take array size
    printf("Enter aray size: ");
    int a;
    scanf("%d", &a);
    // read element of array
    for (int i = 0; i<a; i++){
        printf("Enter the value arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    // reverse and print
    for (int i = a-1; i>=0; i--){
        printf("%d ", arr[i]);
    }


}