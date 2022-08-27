#include <stdio.h>
//decimal to binary function
void decimal_to_binary(int n)
{
    int binary[100], i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binary[i] = remainder;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}  //end of function
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimal_to_binary(n);
    return 0;
}  //end of main function