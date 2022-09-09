#include <stdio.h>
#include <stdlib.h>


int digitCount(int n){
    if(n==0){
        return 0;
    }
    return 1 + digitCount(n/10);
}

int Input_Number(){
    int n;
    printf("Enter a 5 digits number: ");
    scanf("%d", &n);
    if(digitCount(n)!=5){
        printf("Wrong Input\n");
        exit(0);
    }
    return n;
}
int character_extractor(int n){
    Input_Number();
    int a[5];
    for (int i = 0; i<5; i++)
    {
        switch (n)
    {
        case 1:
            a[i] = '#';
            break;
        case 2:
            a[i] = 'a';
            break;
        case 3:
            a[i] = 't';
            break;
        case 4:
            a[i] = 'j';
            break;
        case 5:
            a[i] = '9';
            break;
        case 6:
            a[i] = 'E';
            break;
        case 7:
            a[i] = '@';
            break;
        case 8:
            a[i] = '2';
            break;
        case 9:
            a[i] = 'F';
            break;
        case 0:
            a[i] = '?';
            break;
        default:
            break;
    }
    }
}
int password_generator(char str[], int start){
    for (int i = 0; i < 10; i++)
    {
        printf("%c", str[i]);
    }
}
int main(){
    char str[10];
    Input_Number();
    printf("The password is: ");
    return 0;
}