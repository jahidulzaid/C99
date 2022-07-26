#include <stdio.h>
int main(){
int i, flag = 0, n;
printf("Enter a Number: ");
scanf("%d", &n);

// 1 and 0 is not prime number, exclude them.
if ( n == 0 || n==1)
    flag= 1;
//find a num which will be divisible by i using for loop.
// if we find one then change the flag to 1 and break the loop.
for (i=2; i<=n/2; ++i)
{
    if( n%i == 0){
        flag = 1;
        break;
    }
}
//according to flag value, show output..
if (flag == 0)
    printf("%d is a prime number,", n);
else
    printf("%d is not a prime number,", n);
}

