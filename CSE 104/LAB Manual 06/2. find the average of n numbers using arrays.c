#include <stdio.h>
void average();
int main(){
    average();
    return 0;
}

void average(){
    //read total number of element
    int n;
    printf("Enter number of Element : ");
    
    //read value of each element and store it in arry
    int Arr[scanf("%d", &n)];
    float sum=0, average=0;
    for(int i = 0; i<= n-1; i++){
        printf("Enter %d number : ", i);
        scanf("%d", &Arr[i]);
        sum +=Arr[i];
    }
    average=sum/n;
    printf("The Average is %.2f", average);
    
}