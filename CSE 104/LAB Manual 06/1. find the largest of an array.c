#include <stdio.h>
void largestInArr();
int main(){
    largestInArr();
}

void largestInArr(){
    // read arr elemnts
    int Arr[5];
    for (int i=0; i <= 4; i++){
       scanf("%d", &Arr[i]);
       printf("%d\n", Arr[i]);
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