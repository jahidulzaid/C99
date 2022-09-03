#include<stdio.h>
void print(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char *str="Hello World";
    print(str);
    char str1[20]="Hello World";
    return 0;
}