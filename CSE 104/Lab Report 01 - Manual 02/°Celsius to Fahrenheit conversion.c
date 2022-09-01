#include <stdio.h>

int main()
{
    /* program introduction */
    printf("This program converts temperature from Celcius to Fahrenheit.\n");
    printf("It accepts float value.\n");

    /* required variables*/
    float celsius, fahrenheit;

    /* required input */
    printf("\nEnter temperature in Celsius scale: ");
    scanf("%f", &celsius);

    /* calculation */
    fahrenheit = (celsius * 9/5) + 32;


    /* output section */
    printf("Temperature in Fahrenheit scale is: %.2f°F\n", fahrenheit);
return 0;

}
