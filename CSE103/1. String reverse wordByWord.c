#include<stdio.h>
void  stringReverseWordByWord(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[1000];
    int start = 0, end = 0;
    printf("Enter a string to reverse word by word: ");
    fgets(str, sizeof(str), stdin);
    //printf("%d",str[end] );
    while(str[end]){
        for (end = start;str[end]&&str[end]!=' '; end++);
        stringReverseWordByWord(str, start, end-1);
        start=end+1;
    }
        puts(str);
    return 0;
}

