#include <stdio.h>
int main()
{
    float meters, km;
    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    km = meters / 1000;
    printf("Kilometers = %f", km);
    return 0;
}
