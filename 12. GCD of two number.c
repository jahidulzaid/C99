#include <stdio.h>
int main(){
int i, n1, remainder, n2, gcd;

printf("Enter two number: ");
scanf("%d %d", &n1, &n2);
while (n1!=n2){
    if(n1>n2)
        n1 = n1 - n2;
    else
        n2 = n2 - n1;
    }
printf("%d", n1);
}

