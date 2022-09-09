
#include<stdio.h>
int decToBinary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * decToBinary(n / 2)); //recursive call
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    // print and calling the recursive function
    printf("%d\n", decToBinary(n)); 
    return 0;
}
