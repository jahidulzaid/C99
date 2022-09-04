#include <stdio.h>
#define SIZE 100
int replaceSpace(char str[], char ch);

int main(){
    char str[SIZE], ch;
    ch = '/';
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    replaceSpace(str, ch);
}

int replaceSpace(char str[], char ch){
    int i, j;
    for (i=0; i<SIZE; i++){
        if (str[i]== ' '){
            //changes space with ch character
            str[i] = ch;
        }
    }
    puts(str);
    // for (j=0; j<SIZE; j++){
    //     printf("The changed str is: %s", str[i]);
    // }
}