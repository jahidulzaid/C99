#include <stdio.h>
int main(){
    int i;
    char str1[100], str2[100];

    printf("Enter string str1: ");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i]!= '\0'; ++i){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    puts(str2);
}
