#include <stdio.h>
int main(){

int c;
printf("Enter any char to check alphabet: ");
scanf("%d", &c);
printf("You gave character: %c\n", c);
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    printf("%c is a alphabet.\n", c);
else
    printf("%c is not a alphabet.\n", c);


}
