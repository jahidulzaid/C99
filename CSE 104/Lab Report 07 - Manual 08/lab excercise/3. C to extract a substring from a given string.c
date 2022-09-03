#include<stdio.h>
int substring(char str[], char sstr[], int start, int end);
int main(){
    char str[100], sstr[100];
    int start, end;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);
    substring(str, sstr, start, end);
}   

int substring(char str[], char sstr[], int start, int end){
    int i, j;
    for (i=start, j=0; i<=end; i++, j++){
        sstr[j]=str[i];
    }
    sstr[j]='\0';
    printf("Substring is: %s", sstr);
}