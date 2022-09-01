#include <stdio.h>
int main()
{
    /* Program introduction */
    printf("This program takes one integer input to calculate Area of Square.\n\n");

    /* required variables*/
    int area, side;

    /* required input */
    printf("Enter the length of the Side: ");
    scanf("%d", &side);

    /* calculation */
    area = side * side;

    /* output section */
    printf("The Area of the Square is: %d unit square.\n", area);
    return 0;
}
