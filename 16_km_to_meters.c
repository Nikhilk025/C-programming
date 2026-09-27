#include <stdio.h>
int main()
{
    float km, meters;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    meters = km * 1000;
    printf("Meters = %f", meters);
    return 0;
}
