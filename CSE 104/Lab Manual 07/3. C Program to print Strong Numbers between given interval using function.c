#include <stdio.h>
void strong_number(int n1, int n2);
long long fact(int temp);

int main(){
    int n1, n2;
    printf("Enter the starting number: ");
    scanf("%d", &n1);
    printf("Enter the ending number: ");
    scanf("%d", &n2);
    strong_number(n1, n2);
    return 0;
}
void strong_number(int n1, int n2){
    int i, j, temp, sum;
    //iterates from n1 to n2
    while(n1 !=n2){
        sum = 0;
        temp = n1;
        //calculates sum of factorial of digits of n1
        while(temp != 0){
            sum += fact(temp % 10);
            temp /= 10;
        }
        if (n1 == sum){
            printf("%d, ", n1);
        }

        n1++;
       

    }
}
//recursive function to find factorial of a number
long long fact(int temp)
{
    if(temp == 0)
        return 1;
    else
        return (temp * fact(temp-1));
}