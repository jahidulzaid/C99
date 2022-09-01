#include <stdio.h>
int main()
{
    /* program introduction */
    printf("This program converts temperature from Fahrenheit(°F) to Celsius(°C).\n");
    printf("It accepts float value.\n");

    /* required variables*/
    float celsius, fahrenheit;

    /* required input */
    printf("\nEnter temperature in Fahrenheit scale: ");
    scanf("%f", &fahrenheit);

    /* calculation */
    celsius=(fahrenheit - 32) * 5/9;

    /* output section */
    printf("Temperature in Celsius scale is: %.2f°C\n", celsius);
    return 0;
}
