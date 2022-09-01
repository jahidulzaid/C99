#include <stdio.h>
int main(){
    int i;
    char str[1000] = "Hello world!";
    int size = sizeof(str)/sizeof(str[0]);

    for (i = 0; i< size; i++){
        printf("%c ", str[i]);
    }
    printf("%d", size);
}
