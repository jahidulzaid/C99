#include <stdio.h>
int main(){
    char c;
    printf("Enter an char to check vowel:  ");
    scanf("%c", &c);
    if ( c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        printf("The character is vowel.");
    else
        printf("\nThe character is consonant.");
    return 0;
    }

