#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char ch;
    char s[100];
    char str[100];
    scanf("%c", &ch);
    scanf("%s", s);
    
    scanf(" %[^\n]s", str);
    // fgets(str, 100, stdin);

    //char
    printf("%c\n", ch);
    //string
    printf("%s\n", s);
    // for(int i = 0; i< 100; i++){
    //     printf("%c", str[i]);
    // }

    //sentence
    printf("%s\n", str);
    return 0;
    


}