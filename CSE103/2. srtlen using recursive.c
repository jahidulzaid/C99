// String Length using Recursion
// Created by: Jahidul Islam
// Date: 2022-09-09
#include<stdio.h>
#define SIZE 10000

int stringLenth(char str[], int start)
{
    if(str[start]=='\0')
        return start;
    else
        return stringLenth(str, start+1);
}
int main(){
    char str[SIZE];
    int start = 1;
    printf("Enter a string to find the length: ");
    fgets(str, sizeof(str), stdin);
    //printf("The length of the string is: %d\n", stringLenth(str, start));
    int size = stringLenth(str, start);
    printf("The length of the string is: %d\n", size-1); // -1 for last index which is '\0'
    return 0;
}
