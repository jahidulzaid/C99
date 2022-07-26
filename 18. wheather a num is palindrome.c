#include <stdio.h>
#include <math.h>
int main(){
int num,remainder, original, reverse=0;
printf("Enter an integer: ");
scanf("%d", &num);
original = num;
while (num != 0){
        remainder = num % 10;
        reverse = reverse *10 + remainder;
        num /= 10;
}
printf("%d\n", reverse);
// checking wheather the input num is palindrome.
if ( original == reverse)
    printf("The input num is  palindrome.\n");
else
    printf("The input num isnot palindrome.\n");
}

