#include <stdio.h>
int main(){
    int prices[4];
    printf("Enter prices of book: ");
    scanf("%d", &prices[1]);
    printf("Enter prices of pen: ");
    scanf("%d", &prices[2]);
    printf("Enter prices of pencil: ");
    scanf("%d", &prices[3]);

    printf("book: %d\n Pen: %d\n pencil: %d\n", prices[1], prices[2], prices[3]);

}