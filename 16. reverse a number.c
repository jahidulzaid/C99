#include <stdio.h>

int main(){
int num, remainder, reverse = 0, original;
printf("Enter a number: ");
scanf("%d", &num);
original = num;

while(num != 0){
    remainder = num % 10;
    reverse = reverse *10 + remainder;
    num /=10;
}
printf("%d\n", reverse);

if(reverse == original)
    printf("The input num is palindrome.\n");
else
    printf("The input num is not palindrome.\n");
}
