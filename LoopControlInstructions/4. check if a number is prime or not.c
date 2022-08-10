#include <stdio.h>

int main(){
    int i, n;
    int flag = 0; //if prime flat is 0, if not then flag is 1

    printf("Enter a num: ");
    scanf("%d", &n);

    //excluding 1 and 0
    if(n == 1 || n == 0 ){
        flag = 1;
    }
    //
    for (i=2; i<=10; i++){
        if (n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("The input num %d is a prime number.\n", n);
    else
    {
        printf("The input num %d is not prime.\n", n);
    }
    
    return 0;
}