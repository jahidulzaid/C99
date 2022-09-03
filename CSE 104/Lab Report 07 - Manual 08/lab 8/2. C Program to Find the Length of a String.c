#include <stdio.h>


int main(){
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    stringLength(str);
    return 0;
}
void stringLength(char str[]){
    int i;
    for (i=0; str[i]!='\0';i++);
    printf("Length of the array is: %d", i);
}
