#include<stdio.h>
int countAlphabet(char alp[]);
int countDigits(char dig[]);
int countSpCharats(char characts[]);
int strCount(char str[100]);

int main(){
    char str[100];
    char alp[100], dig[100], characts[100];
    int countAlphabet, countDigits, countSpChar;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    //for alphabets
    for (int i=0; i<100;i++){
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alp[i]=str[i];
            countAlphabet++;
        }
    }
    printf("Alphabets: %d\n", countAlphabet);
    //for digits
    for(int i = 0; i<100; i++){
        if (str[i]>='0' && str[i]<='9'){
            dig[i]=str[i];
            countDigits++;
        }
    }
    printf("Digits: %d\n", countDigits);
    //for special characters
    for(int i=0; i<100; i++){
        if((str[i]>='!' && str[i]<='/') || (str[i]>=':' && str[i]<='@') || (str[i]>='[' && str[i]<='`') || (str[i]>='{' && str[i]<='~')){
            characts[i]=str[i];
            countSpChar++;
        }
    }
    printf("Special Characters: %d\n", countSpChar);

}
