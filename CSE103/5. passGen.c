#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int digitCount(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + digitCount(n / 10);
}
int Input_Number()
{
    int n;
    printf("Enter a 5 digits number: ");
    scanf("%d", &n);
    if (digitCount(n) != 5)
    {
        printf("Wrong Input\n");
        exit(0);
    }
    return n;
}
// it has one more page




//page 2
void password_generator(int a)
{
    switch (a)
    {
    case 1:
        printf("#");
        break;
    case 2:
        printf("a");
        break;
    case 3:
        printf("t");
        break;
    case 4:
        printf("j");
        break;
    case 5:
        printf("9");
        break;
    case 6:
        printf("E");
        break;
    case 7:
        printf("@");
        break;
    case 8:
        printf("2");
        break;
    case 9:
        printf("F");
        break;
    case 0:
        printf("?");
        break;
    default:
        printf("\n");
        break;
    }
}
// it has one more page
int main()
{
    int recived, temp;
    int i, j, k;
    int str[5];

    recived = Input_Number();

    for (i = 0; i <= 5; i++)
    {
        temp = recived;
        recived = temp % 10;
        for (j = 5; j > i; j--)
        {
            str[j] = recived;
        }
        temp = temp / 10;
        recived = temp;
    }
    // reverse the array and pass it to the password generator
    for (k = 5; k >= 0; k--)
        {
            password_generator(str[k]);    
        }
    printf("\n\n");
}

//end of the code