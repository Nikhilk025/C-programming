#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius) / 5 + 32;
    printf("Fahrenheit = %f", fahrenheit);
    return 0;
}
