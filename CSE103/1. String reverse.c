#include<stdio.h>

int strRev(char *str)
{
    int i=0;
    int j=0;
    char temp;
    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i--;
        j++;
    }
    return 0;
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    strRev(str);
    printf("Reverse of the string is: %s",str);
    return 0;
}