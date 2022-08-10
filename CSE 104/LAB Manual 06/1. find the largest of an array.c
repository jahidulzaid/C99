#include <stdio.h>
void largestInArr();
int main(){
    largestInArr();
}

void largestInArr(){
    // read arr elemnts
    int n;
    printf("Enter the size of the Arry: ");
    scanf("%d", &n);
    int Arr[n];
    for (int i=0; i <= n; i++){
        {
            printf("Enter the element of %d: ", i);
            scanf("%d", &Arr[i]);
        }
       
    }
    // finding largest
    int large = Arr[0];
    for (int i=0; i<= 4; i++){
        if (Arr[i]> large){
            large = Arr[i];
        }
    }
    printf("Largest element in Arr is %d\n", large);
    
}